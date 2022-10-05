#include "main.h"

/**
 *_abs - give the absolute number
 *@n: number to check
 *
 * Return: Null value
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else if (n == 0)
	{
		return (n);
	}
	else
	{
		n = -n;
		return (n);
	}
}
