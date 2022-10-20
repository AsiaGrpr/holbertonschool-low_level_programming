#include <stdio.h>
#include "main.h"

/**
 * square_recursion - find integer which square = n
 * @n: integer to find natural square root
 * @x: integer to test
 *
 * Return: 1 or -1 if error
 */
int square_recursion(int n, int x)
{
	x++;

	if (n == x)
	{
		if (n % 2 == 0 || x == 1)
			return (1);
		return (-1);
	}
	if (x * x == n)
		return (x);
	return (square_recursion(n, x));
}

/**
 * _sqrt_recursion - find the natural square root of an integer
 * @n: number
 *
 * Return: the square root or -1 if error
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	return (square_recursion(n, 0));
}
