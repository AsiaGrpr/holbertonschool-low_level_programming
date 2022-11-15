#include "lists.h"

/**
 * pop_listint - f° that deletes the head node of a linked list
 * @head: pointer to pointer to head of th linked list
 *
 * Return: data of the head node or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
		return (0);

	node = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(node);
	return (n);
}
