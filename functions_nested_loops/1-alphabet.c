#include "main.h"

/**
 * print_alphabet - print the alphabet with _putchar
 *@void: Null value
 *
 * Return: Zero value
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar (i);
	_putchar ('\n');
}
