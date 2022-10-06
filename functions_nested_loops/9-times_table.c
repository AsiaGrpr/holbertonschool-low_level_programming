#include "main.h"

/**
 *times_table - print the 9 tables
 *
 *
 * Return: Null value
*/
void times_table(void)
{
	int x, y, p;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			p = x * y;
			if (p < 10)
				_putchar(' ');
				_putchar(p + '0');
				_putchar(',');
			else
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
				_putchar(',');
				_putchar(' ');
		}
		_putchar('\n');
	}
}
