#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of elements to sum
 *
 * Return: sum value or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i;

	va_start(list, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(list, int);
		}
		va_end(list);

		return (sum);
	}
	return (0);
}
