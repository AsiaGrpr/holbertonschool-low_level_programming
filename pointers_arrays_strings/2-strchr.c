#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to scan
 * @c: char to locate
 *
 * Return: string from the first occurence of c or NULL
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}


