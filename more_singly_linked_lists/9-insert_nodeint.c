#include "lists.h"

/**
 * insert_nodeint_at_index - f° that inserts a node at nth place
 * @head: pointer to pointer to head of the linked list
 * @idx: index of the list where add the node
 * @n: int data of the node
 *
 * Return: hte adress of the node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	unsigned int size = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;

	if (!head && idx == 0)
		return (NULL);

	if (head && idx != 0)
	{
		if (idx < 1 || idx > size + 1)
			return (NULL);
		while (idx--)
		{
			if (idx == 0)
			{
				node->next = *head;
				*head = node;
			}
			else
				head = &(*head)->next;
		}
		size++;
	}
	return (node);
}
