#include "lists.h"

/**
 * free_dlistint - function that frees a list_t list
 * @head: pointer to head of linked list
 *
 * Return: Void value
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;

		free(node);
	}
}
