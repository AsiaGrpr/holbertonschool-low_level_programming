#include "main.h"

/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *@void: Null value
 *
 * Return: Null value
 */
void more_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
	int a;

	for (a = 0 ; a < 14 ; a++)
	{
		if (a > 9)
		{
			_putchar((a / 10) + '0');
		}
		_putchar((a % 10) + '0');

	_putchar('\n');
	}
}
