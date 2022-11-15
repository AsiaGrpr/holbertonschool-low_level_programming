#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - f° adds a new node at the end of a linked list
 * @head: pointer to head pointer of the linked list
 * @n: integer to add in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
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
