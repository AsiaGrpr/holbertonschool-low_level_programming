#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer tot pointer to head of the linked list
 * @index: index of the node to delete
 *
 * Return: 1 or 0 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *node = *head;
	listint_t *temp = NULL;

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
