#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - f° adds a new node at the end of a linked list
 * @head: pointer to head pointer of the linked list
 * @n: integer to add in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *temp = *head;

	node = malloc(sizeof(dlistint_t));
	if (!node)
	{
		free(node);
		return (NULL);
	}

	if (head && *head)
	{
		while (!(*head)->next)
			(*head) = (*head)->next;
	}

	node->n = n;
	node->next = NULL;

	if (!head && !*head)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		(*head)->next = node;
		node->prev = *head;
		*head = temp;
	}

	return (node);
}
