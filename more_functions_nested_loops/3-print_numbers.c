#include "main.h"

/**
 *print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *@void: Null value
 *
 *Return: Null value
 */
void print_numbers(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
		_putchar (i);
	_putchar ('\n');
}
