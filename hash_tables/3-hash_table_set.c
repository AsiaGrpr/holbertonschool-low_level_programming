#include "hash_tables.h"

/**
 * create_node - function that create element of the hash table
 * @key: key used in the hash table
 * @value: value of the element
 *
 * Return: pointer to node, or NULL value if fail
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;
	char *keydup, *valuedup;

	if (!key || strcmp(key, "") == 0 || !value)
		return (NULL);

	keydup = strdup(key);
	valuedup = strdup(value);
	if (!keydup || !valuedup)
	{
		free(keydup);
		free(valuedup);
		return (NULL);
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->key = keydup;
	node->value = valuedup;


	return (node);
}

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key to use
 * @value: value paired with the key
 *
 * Return: 1 for success 0 for fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	char *valuedup;
	hash_node_t *node = NULL, *new = NULL;

	if (!key || strcmp(key, "") == 0 || !ht || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	valuedup = strdup(value);
	if (!valuedup)
		return (0);

	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			if (strcmp(node->value, value) != 0)
			{
				free(node->value);
				node->value = valuedup;
			}
			return (1);
		}
		node = node->next;
	}

	new = create_node(key, value);
	if (!new)
		return (0);

	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
