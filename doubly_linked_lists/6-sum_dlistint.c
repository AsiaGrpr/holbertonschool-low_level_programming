#include "lists.h"

/**
 * sum_dlistint - f° to sum of all the data (n) of a linked list
 * @head: pointer to head of the linked list
 *
 * Return: the sum value or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
