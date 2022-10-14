#include "main.h"

/**
 *leet - function that encodes a string into 1337
 * @s: string to encode
 *
 * Return: the string encoded
 */
char *leet(char *s)
{
	int i, j;
	char l[] = "AaEeOoTtLl";
	char n[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (l[j] == s[i])
			{
				s[i] = n[j];
			}
		}
	}
	return (s);
}
