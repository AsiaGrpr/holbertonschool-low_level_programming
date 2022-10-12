#include "main.h"

/**
 *puts_half - Write a function that prints half of a string
 *@str: string to cut in half
 *
 * Return: Null value
 */
void puts_half(char *str)
{
	int i;
	int c = 0;


	for (i = 0; str[i] != '\0'; i++)
	{
		c++;
	}
	if ((c % 2) == 0)
	{
		for (i = (c / 2); i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	else if ((c % 2) != 0)
	{
		for (i = ((c - 1) / 2); i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
