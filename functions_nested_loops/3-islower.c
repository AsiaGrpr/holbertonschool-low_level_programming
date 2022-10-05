#include "main.h"

/**
 *_islower - check if a letter is lowercase
 *@void: Null value
 *
 * Return: Zero value
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
