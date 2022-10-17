#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer
 *
 * Return: the natural square root of a number or -1 if error
 */
int _sqrt_recursion(int n)
{

	if (n == 0)
	{
		return (0);
	}
	if ((n / 1) != 1)
	{
		return (-1);
	}
	return (_sqrt_recursion();
}

