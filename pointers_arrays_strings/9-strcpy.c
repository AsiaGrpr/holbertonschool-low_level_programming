#include "main.h"

/**
 **_strcpy - Write a function that copies the string pointed to by src,
 * to the buffer pointed to by dest
 *@src: array to duplicate
 *@dest: array duplicated
 *
 * Return: zero value
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
