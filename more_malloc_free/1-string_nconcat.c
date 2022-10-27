#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2 to concatenate to s1
 *
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	unsigned int i = 0;
	unsigned int j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (s1 == NULL && s2 == NULL)
		return (NULL);


	len1 = strlen(s1);
	len2 = strlen(s2);

	p = malloc(sizeof(char) * ((len1 + n) + 1));

	if (p == NULL)
		return (NULL);

	if (len2 < n)
		n = len2;
	else
		len2 = n;

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
