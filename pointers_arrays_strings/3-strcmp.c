#include "main.h"

/**
 *_strcmp -Write a function that compare two strings
 *@s1: first string
 *@s2: second string to compare
 *
 * Return: 0 for equality, -1 if s1<s2 and 1 if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (*s1 != '\0')
	{
		i++;
	}

	while (*s2 != '\0')
	{
		j++;
	}

	if (i == j)
	{
		return (0);
	}
	else if (i < j)
	{
		return (i - j);
	}
	else if (i > j)
	{
		return (i - j);
	}
	return (0);
}
