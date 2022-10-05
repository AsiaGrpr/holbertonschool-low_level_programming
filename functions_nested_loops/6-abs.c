#include "main.h"

/**
 *_abs - give the absolute number
 *@n: number to check
 *
 * Return: Null value
*/
int soustraction(int o, int n)
{
	return (o - n);
}

int _abs(int)
{
	int n;

	if (n > 0)
	{
		return (n);
	}

	else if (n == 0)
	{
		return (0);
	}
	else
	{
		int resultat = soustraction(0, n)
			_putchar(resultat + '0');
		return (0);
	}
}
