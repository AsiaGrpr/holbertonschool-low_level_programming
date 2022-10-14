#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: string to modify
 *
 * Return: Always 1 (True) or 0 (False)
 */
char *cap_string(char *s)
{
	int i = 0;
	int l = 0;
	int up = 1;
	char c[] = {'\n', ' ', ',', '	', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		if (up == 1)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				up = 0;
				s[i] = s[i] - 32;
			}
			up = 0;
		}
		l = 0;
		for (; l < 12; l++)
			if (c[l] == s[i])
				up = 1;

		i++;
	}
	return (s);


}
