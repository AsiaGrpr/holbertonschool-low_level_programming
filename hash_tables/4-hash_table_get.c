#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table to use
 * @key: key used to retrieve the value
 *
 * Return:the value of the element or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *node;

	if (!ht || ht->array == NULL || ht->size == 0 || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	if (!node)
		return (NULL);

	return (node->value);
}

