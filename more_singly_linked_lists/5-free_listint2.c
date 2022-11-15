#include "lists.h"

/**
 * free_listint2 - function that frees a list_t list
 * @head: pointer to pointer to head of linked list
 *
 * Return: Void value
 */
void free_listint2(listint_t **head)
{
	listint_t *node = *head;
	listint_t *next;

	if (head == NULL)
		return;

	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}

	*head = NULL;
}
