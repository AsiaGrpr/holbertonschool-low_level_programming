#include "lists.h"

/**
 * insert_dnodeint_at_index - f° that inserts a node at nth place
 * @head: pointer to pointer to head of the linked list
 * @idx: index of the list where add the node
 * @n: int data of the node
 *
 * Return: hte adress of the node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *node, *temp;
	unsigned int size = 0;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	temp = (*head);

	if (!*head)
	{
		(*head) = node;
		return (node);
	}

	if (idx == 0)
	{
		node->next = temp;
		*head = node;
		return (node);
	}
	while (size < (idx - 1))
	{
		if (temp)
		{
			temp = temp->next;
			size++;
		}
		else
			return (NULL);
	}

	node->next = temp->next;
	temp->next = node;
	return (node);
}
