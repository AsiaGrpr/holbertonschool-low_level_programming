#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: pointer tot pointer to head of the linked list
 * @index: index of the node to delete
 *
 * Return: 1 or 0 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;

	dlistint_t *node = *head;
	dlistint_t *temp = NULL;

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);

		node = *head;
		*head = (*head)->next;

		free(node);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
	}
	if (node->next == NULL)
		return (-1);
	temp = node->next;
	node->next = temp->next;
	free(temp);

	return (1);
}
