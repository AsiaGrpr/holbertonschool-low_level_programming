#include <stdio.h>

/**
 *print_array - Write a function that prints n elements of an array of integers
 *@a: array to display
 *@n: number of element to display
 *
 * Return: Null value
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", %d", a[i]);
		}
		else if (i == 0)
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
