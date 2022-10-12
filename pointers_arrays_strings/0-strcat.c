#include "main.h"

/**
 *_strcat -Write a function that concatenates two strings
 *@src: first string
 *@dest: second string to concatenate
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
