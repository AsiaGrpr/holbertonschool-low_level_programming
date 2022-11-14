#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that give the number of elements in a linked list
 * @h: pointer to the elements
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
