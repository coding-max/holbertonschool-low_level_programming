#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table.
 * @size:  size of the array.
 * Return: pointer to new sorted hash table, or NULL if somethong was wrong.
 **/
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t **) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - adds an element to the sorted hash table.
 * @ht: pointer to the sorted hash table.
 * @key: key string.
 * @value: string associated with key.
 * Return: 1 if it succeeded, 0 otherwise.
 **/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *new_node = NULL, *tmp_node = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	/* check if key is in the hash table to update its value */
	tmp_node = (ht->array)[index];
	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key) == 0)
		{
			free(tmp_node->value);
			tmp_node->value = strdup(value);
			if (!tmp_node->value)
				return (0);
			return (1);
		}
		tmp_node = tmp_node->next;
	}

	/* allocate memory for the node and strings*/
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	return (shash_table_add(ht, index, new_node));
}


int shash_table_add(shash_table_t *ht, unsigned long int index,
					shash_node_t *new_node)
{
	shash_node_t *tmp_node = NULL;

	/* assign pointers to the hash table and contiguous nodes in the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	/* empty list */
	if (!ht->shead)
	{
		new_node->sprev = new_node->snext = NULL;
		ht->shead = ht->stail = new_node;
	}
	/* insert node in the first position */
	else if (strcmp(ht->shead->key, new_node->key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	/* general case, search the position and insert in the sorted list */
	else
	{
		tmp_node = ht->shead;
		while (tmp_node->snext && strcmp(tmp_node->snext->key, new_node->key) < 0)
			tmp_node = tmp_node->snext;
		new_node->sprev = tmp_node;
		new_node->snext = tmp_node->snext;
		if (!tmp_node->snext)
			ht->stail = new_node;
		else
			tmp_node->snext->sprev = new_node;
		tmp_node->snext = new_node;
	}
	return (1);
}

/**
  * shash_table_get - retrieves a value associated with a key.
  * @ht: pointer to the sorted hash table.
  * @key: key string.
  * Return: value associated with the key, or NULL if key couldn’t be found.
  */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp_node;

	if (!ht || !key)
		return (NULL);

	/* get index */
	index = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[index];
	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key) == 0)
			return (tmp_node->value);
		tmp_node = tmp_node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table.
 * @ht: pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp_node;

	if (ht == NULL)
		return;

	tmp_node = ht->shead;
	printf("{");
	while (tmp_node)
	{
		printf("'%s': '%s'", tmp_node->key, tmp_node->value);
		tmp_node = tmp_node->snext;
		if (tmp_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse order.
 * @ht: pointer to the sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp_node;

	if (ht == NULL)
		return;

	tmp_node = ht->stail;
	printf("{");
	while (tmp_node)
	{
		printf("'%s': '%s'", tmp_node->key, tmp_node->value);
		tmp_node = tmp_node->sprev;
		if (tmp_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table.
 * @ht: pointer to hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp_node, *aux_node;

	if (!ht)
		return;

	tmp_node = ht->shead;
	while (tmp_node)
	{
		aux_node = tmp_node;
		free(aux_node->key);
		free(aux_node->value);
		free(aux_node);
		tmp_node = tmp_node->snext;
	}
	free(ht->array);
	free(ht);
}
