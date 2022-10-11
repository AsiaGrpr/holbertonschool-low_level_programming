#include "main.h"

/**
 *_strlen - give the length of a string
 *@s: string to mesure
 *
 * Return: len value (length)
 */
int _strlen(char *s)
{
	int len = 0;
	while(*s!='\0')
	{
		len++;
		s++;
	}
	return len;
}
