#include "main.h"

/**
 *rev_string - Write a function that reverses a string
 *@s: string to reverse
 *
 * Return: Null value
 */
void rev_string(char *s)
{
	int i;
	int c = 0;
	int a;


	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}
	c--;

	for (a = 0; a < (c / 2); a++)
	{
		char tmp = s[c - a];

		s[c - a] = s[a];
		s[a] = tmp;
	}
}

