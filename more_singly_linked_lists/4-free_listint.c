#include "lists.h"

/**
 * free_listint - function that frees a list_t list
 * @head: pointer to head of linked list
 *
 * Return: Void value
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;

		free(node);
	}
}
