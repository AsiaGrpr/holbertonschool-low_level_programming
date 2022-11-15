#include <string.h>
#include "lists.h"

/**
 * add_node_end - f° adds a new node at the end of a linked list
 * @head: pointer to head pointer of the linked list
 * @str: string to add in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp = *head;

	node = malloc(sizeof(list_t));
	if (!node)
	{
		free(node);
		return (NULL);
	}

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (!*head)
	{
		*head = node;
		return (node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = node;
	return (node);
}
