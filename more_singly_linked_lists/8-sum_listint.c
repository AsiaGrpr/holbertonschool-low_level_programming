#include "lists.h"

/**
 * sum_listint - f° to sum of all the data (n) of a linked list
 * @head: pointer to head of the linked list
 *
 * Return: the sum value or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
