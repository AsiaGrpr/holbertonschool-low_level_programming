#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - give all numbers from n to 98
 *@n: number to check
 *
 * Return: Null value
*/
void print_to_98(int n)
{
	for (n < 98; n++)
	{
		_putchar (n);
		_putchar (44);
		_putchar (32);
	}
	_putchar (10);
	return (0);
}
