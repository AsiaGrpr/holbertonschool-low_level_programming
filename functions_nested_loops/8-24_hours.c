#include "main.h"

/**
 *jack_bauer - print all minutes of the day, format 00:00
 *@void: Null value
 *
 *@h: hours
 *@m: minutes
 * Return: the hours of the complete day
*/
void jack_bauer(void)
{
	int h, m;

		for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h / 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m / 10) + '0');
			_putchar('\n');
		}
	}
}
