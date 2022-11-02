#include "variadic_functions.h"


/**
 * print_strings - function that prints strings
 * @separator: char to separate the different elements
 * @n: number of elements  to print
 *
 * Return: NULL value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *p;

	va_start(list, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			p = va_arg(list, char*);

			if (p != NULL)
				printf("%s", p);

			else
				printf("(nil)");

			if (i < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		va_end(list);
		printf("\n");
	}
	else
		printf("\n");
}
