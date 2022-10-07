#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: number of time '\' have to be drawn
 *
 * Return: Zero value
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	int a;

	for (a = 0 ; a < n ; a++)
	{
		_putchar(32);
	}
		_putchar(92);
	}
	_putchar('\n');
}
