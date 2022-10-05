#include "main.h"

/**
 * main - define print_alphabet
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

int main(void)
{
	print_alphabet();

	return (0);
}
