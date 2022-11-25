#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to use
 *
 * Return: VOID value
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long index = 0;
	char *quote = "";
	hash_node_t *node;

	if (!ht || !ht->array)
		return;

	printf("{");

	while (index < ht->size)
	{
		node = ((ht->array)[index]);
		while (node)
		{
			printf("%s'%s': '%s'", quote, node->key, node->value);
			quote = ", ";
			node = node->next;
		}
		index++;
	}

	printf("}\n");
}
