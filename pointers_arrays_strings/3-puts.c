#include "main.h"

/**
 *_puts - Write a function that prints a string
 *@str: string to stdout
 *
 * Return: Null value
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
