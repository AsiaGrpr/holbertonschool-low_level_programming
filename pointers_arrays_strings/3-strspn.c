#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to scan
 * @accept: list of char to compare
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int l = 0;
	int i = 0;

	for (; s[l] != '\0'; l++)
	{
		int scan = 1;

		for (; accept[i] != '\0'; i++)
		{
			if (s[l] == accept[i])
			{
				length++;
				scan = 0;
			}

		}
		if (scan == 0)
		{
			return (length);
		}
	}
	return (0);
}
