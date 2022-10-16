#include "main.h"

/**
 *_memcpy - function that copy n bytes of a string
 *@src: first string
 *@dest: second string
 *@n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
