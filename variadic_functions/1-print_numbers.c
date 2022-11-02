#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: char to separate the different numbers
 * @n: number of numbers to print
 *
 * Return: NULL value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int p;

	va_start(list, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			p = va_arg(list, int);

			if (i == (n - 1))
				printf("%d", p);

			if (separator == NULL)
				printf("%d", p);

			if (i != (n - 1))
				printf("%d%s", p, separator);
		}
		va_end(list);
		printf("\n");
	}
}
