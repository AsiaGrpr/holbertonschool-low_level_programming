#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: new pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	int i = 0;
	int j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (s1 == NULL && s2 == NULL)
		return (NULL);


	len1 = strlen(s1);
	len2 = strlen(s2);
	p = malloc(sizeof(char) * ((len1 + len2) + 1));

	if (p == NULL)
		return (NULL);

	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
