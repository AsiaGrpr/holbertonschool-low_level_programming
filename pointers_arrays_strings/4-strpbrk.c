#include "main.h"

/**
 * _strpbkr - function that searches a string for any of a set of bytes
 * @s: string to scan
 * @accept: list of char to compare
 *
 * Return: s if match or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	char *dest = s;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; accept[j] !='\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				*dest = s[i];
			}

		}

	}
	*dest = '\0';
	return (dest);
}
