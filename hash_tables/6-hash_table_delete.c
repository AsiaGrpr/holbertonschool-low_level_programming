#include "hash_tables.h"

/**
 * hash_table_delete - function that free and delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL, *temp = NULL;

	if (!ht || ht->array == NULL || ht->size == 0)
		return;

	while (index < ht->size)
	{
		node = (ht->array)[index];
		while (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
		index++;
	}
	free(temp);
	free(ht->array);
	free(ht);
}
