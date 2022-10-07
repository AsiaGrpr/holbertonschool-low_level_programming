#include "main.h"

/**
 *print_most_numbers - prints the numbers, from 0 to 9, except 2 & 4
 *@void: Null value
 *
 * Return: Null value
 */
void print_most_numbers(void)
{
	char i = 0;

	for (; i <= 9; i++)
	{
		if (i != 2 || i != 4)
		{
			_putchar (i + '0');
		}
		else
		{
			return;
		}
	}
	_putchar ('\n');
}
