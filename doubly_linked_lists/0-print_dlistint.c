#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - f° that print all elements of a dlistint_t list
 * @h: pointer
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
