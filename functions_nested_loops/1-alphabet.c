#include "main.h"

/**
 * main - define print_alphabet
 *@void: Null value
 *
 * Return: Zero value
*/

int main(void)
{
	print_alphabet();
		char i;

		for (i = 'a' ; i <= 'z' ; i++)
			_putchar (i);

		_putchar ('\n');

	return (0);
}
