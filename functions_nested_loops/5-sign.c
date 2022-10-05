#include "main.h"

/**
 *print_sign - check if a number is +, - or zero and print a sign
 *@n: the number to check
 *
 * Return: 1 when its postive, 0 if its zero or -1 if its negative
*/

int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
		return (1);

	else if (n == 0)
		_putchar('0');
		return (0);

	else
		_putchar('-');
		return (-1);
}
