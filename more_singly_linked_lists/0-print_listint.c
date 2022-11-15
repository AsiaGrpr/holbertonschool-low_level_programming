#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a list_t list
 * @h: pointer of each elements
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
