#include <string.h>
#include "lists.h"

/**
 * add_nodeint - f° that adds a node at the beginning of a linked list
 * @head: pointer to head pointer of the linked list
 * @n: int data added to the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
