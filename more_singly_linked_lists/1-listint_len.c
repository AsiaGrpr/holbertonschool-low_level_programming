#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that give the number of elements in a linked list
 * @h: pointer to the elements
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
