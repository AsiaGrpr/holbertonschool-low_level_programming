#include "main.h"

/**
 *_strcmp -Write a function that compare two strings
 *@s1: first string
 *@s2: second string to compare
 *
 * Return: 0 for equality, negative int if s1<s2 and positive int if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
