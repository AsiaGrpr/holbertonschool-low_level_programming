#include "main.h"

/**
 *print_square - draws a square on the terminal
 *@size: size of the square
 *
 * Return: Zero value
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int a;

			for (a = 0 ; a < size; a++)
			{
				_putchar(35);
			}

		_putchar(35);
		_putchar('\n');
		}
	}
}
