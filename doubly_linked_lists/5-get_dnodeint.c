#include "lists.h"

/**
 * get_dnodeint_at_index - f° that returns the nth node of a linked list
 * @head: pointer to head of the linked list
 * @index: int wich is the index of the node
 *
 * Return: the data of the nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
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
