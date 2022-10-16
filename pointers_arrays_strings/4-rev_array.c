#include "main.h"

/**
 *reverse_array - Write a function that reverses an array of integers
 *@a: the array
 *@n: number of element of the array
 *
 * Return: pointer to the resulting string
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = *(a + n);
		*(a + n) = *(a + i);
		*(a + i) = tmp;
	}
}

