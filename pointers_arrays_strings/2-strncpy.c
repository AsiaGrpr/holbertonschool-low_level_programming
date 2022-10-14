#include "main.h"

/**
 *_strncpy - Write a function that copy a string
 *@src: first string
 *@dest: second string
 *@n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	for (i = 0; src[i] < src[n] && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; src[i] < src[n]; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
