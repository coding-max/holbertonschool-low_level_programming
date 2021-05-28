#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table.
 * @key: key.
 * @value: value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *value_ = NULL, *key_ = NULL;
	hash_node_t *new_node = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	/* allocate memory for the node and duplicate strings*/
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	key_ = strdup(key);
	if (!key_)
	{
		free(new_node);
		return (0);
	}
	value_ = strdup(value);
	if (!value_)
	{
		free(new_node);
		free(key_);
		return (0);
	}

	/* assign data to node and find index in hash table */
	new_node->key = key_;
	new_node->value = value_;
	new_node->next = NULL;
	index = key_index((unsigned char *)key, ht->size);

	/* insert node into hash table */
	if (!((ht->array)[index]))
		(ht->array)[index] = new_node;
	else
		hash_table_update(ht, key_, value_, index, new_node);
	return (1);
}

/**
 * hash_table_update - adds an element to the hash table.
 * @ht: hash table.
 * @key_: key.
 * @value_: value associated with the key.
 * @index: index in the hash table to insert/update the node.
 * @new_node: node to insert into hash table.
 * Return: Always 1.
 **/
int hash_table_update(hash_table_t *ht, char *key_, char *value_,
						unsigned long int index, hash_node_t *new_node)
{
	hash_node_t *temp_node = (ht->array)[index];

	while (temp_node)
	{
		if (strcmp(temp_node->key, key_) == 0)
		{
			free(key_);
			free(new_node);
			free(ht->array[index]->value);
			ht->array[index]->value = value_;
			return (1);
		}
		temp_node = temp_node->next;
	}
	temp_node = (ht->array)[index];
	new_node->next = temp_node;
	(ht->array)[index] = new_node;
	return (1);
}
