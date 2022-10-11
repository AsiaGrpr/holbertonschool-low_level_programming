#include "main.h"

/**
 *print_rev - Write a function that prints a string, in reverse
 *@s: string to stdout
 *
 * Return: Null value
 */
void print_rev(char *s)
{
	int i;
	int c = 0;


	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}

	for (i = c - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
