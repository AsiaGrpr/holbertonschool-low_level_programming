#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - Give pointer to a new memory space, which contain a copy of string
 * @str: string to copy
 *
 * Return: pointer with copy of the string
 */
char *_strdup(char *str)
{
	int i;
	int len = strlen(str);
	char *p;

	p = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len ; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
