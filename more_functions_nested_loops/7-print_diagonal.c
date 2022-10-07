#include "main.h"

/**
 *print_diagonal - draws a diagonal line on the terminal
 *@n: number of time '\' have to be drawn
 *
 * Return: Zero value
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		for (i = 0; i < n; i++)
		{
			int a;
			for (a = 0 ; a < i; a++)
			{
				_putchar(32);
			}

		_putchar(92);
		_putchar('\n');
		}
	}
}
