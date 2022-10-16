#include "main.h"

/**
 *_strncat -Write a function that concatenates two strings
 *@src: first string
 *@dest: second string to concatenate
 *@n: number of bytes used to tronc the src string
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (src[i] != src[n] && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);

	return (0);
}
