#include "lists.h"

/**
 * get_nodeint_at_index - f° that returns the nth node of a linked list
 * @head: pointer to head of the linked list
 * @index: int wich is the index of the node
 *
 * Return: the data of the nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{

		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
