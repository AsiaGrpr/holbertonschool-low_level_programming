#include "main.h"

/**
 *print_alphabet_x10 - print the alphabet 10 times
 *@void: Null value
 *
 * Return: Zero value
*/

void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		_putchar(a);

	_putchar('\n');
	}
}
