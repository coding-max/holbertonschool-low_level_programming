#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size:  size of the array.
 * Return: pointer to hash table's new node, or NULL if somethong was wrong.
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_node = NULL;

	new_node = malloc(sizeof(hash_table_t));
	if (!new_node)
		return (NULL);

	new_node->size = size;
	new_node->array = malloc(sizeof(hash_node_t **) * size);
	if (!new_node->array)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		(new_node->array)[i] = NULL;
	return (new_node);
}
