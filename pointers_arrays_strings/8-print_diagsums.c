#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *	of a square matrix of integers
 *@a: square matrix of integers
 *@size: size of the square matrix
 *
 * Return: Null value
 */
void print_diagsums(int *a, int size)
{
	int sum ;
	int i, j;

	for (i = 0; a[i] < a[size]; i++)
	{
		for (j = 0; a[j] < a[size]; j++)
		{
			if (i == j || (i + j) == (size - 1))
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("Sum = %d\n", sum);
}
