#include "main.h"

/**
 *_islower - check if a letter is lowercase
 *
 * Return: 1 or 0
*/

int _islower(void)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
