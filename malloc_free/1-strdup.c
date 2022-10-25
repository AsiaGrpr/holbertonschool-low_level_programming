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
	int len;
	char *p;

	/* on recupère l'erreur avant de l'utiliser */
	if (str == NULL)
		return (NULL);

	len = strlen(str);

	p = malloc(sizeof(char) * (len + 1));
	/* si malloc echoue on arrete le programe */
	if (p == NULL)
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
