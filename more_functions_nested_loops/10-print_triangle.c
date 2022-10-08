#include "main.h"

/**
 *print_triangle - draws a triangle on the terminal
 *@size: number of line have to be drawn
 *
 * Return: Zero value
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = size; i >= 0; i--)
		{
			int a;

			for (a = 0 ; a < i; a++)
			{
				putchar(32);
			}

		putchar(35);
		putchar('\n');
		}
	}
}
