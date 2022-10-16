#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to scan
 * @accept: list of char to compare
 *
 * Return: s if match or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	char *dest = s;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				*dest = *s;
				dest++;
			}
			accept++;
		}
		s++;
	}
	dest++;
	*dest = '\0';
	return (dest);
}
