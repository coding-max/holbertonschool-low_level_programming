#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: pointer to hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp_node;
	unsigned int index, first = 0;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp_node = ht->array[index];
		while (temp_node)
		{
			if (first == 1)
				printf(", ");
			printf("'%s': '%s'", temp_node->key, temp_node->value);
			temp_node = temp_node->next;
			first = 1;
		}
	}
	printf("}\n");
}
