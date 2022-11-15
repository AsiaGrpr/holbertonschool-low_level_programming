#include <string.h>
#include "lists.h"

/**
 * add_node - f° that adds a node at the beginning of a linked list
 * @head: pointer to head pointer of the linked list
 * @str: string to add in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (*head);
}
