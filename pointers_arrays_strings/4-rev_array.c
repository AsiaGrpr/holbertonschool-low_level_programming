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


	if ((n % 2) == 0)
		for (i = 0; i < (n / 2); i++)
		{
			int tmp = *(a + ((n - 1) - i));
			*(a + (n - i)) = *(a + i);
			*(a + i) = tmp;
		}
	if ((n % 2) != 0)
		for (i = 0; i < ((n / 2) + 1); i++)
		{
			int tmp = *(a + ((n - 1) - i));
			*(a + (n - i)) = *(a + i);
			*(a + i) = tmp;
		}
}

