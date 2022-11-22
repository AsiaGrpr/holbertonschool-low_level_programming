#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - f° that adds a node at the beginning of a linked list
 * @head: pointer to head pointer of the linked list
 * @n: int data added to the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	if (*head)
		(*head)->prev = node;

	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;

	return (*head);
}
