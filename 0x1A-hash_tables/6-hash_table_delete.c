#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp_node, *aux;
	unsigned int index;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		temp_node = ht->array[index];
		while (temp_node)
		{
			aux = temp_node;
			free(aux->key);
			free(aux->value);
			free(aux);
			temp_node = temp_node->next;
		}
	}
	free(ht->array);
	free(ht);
}
