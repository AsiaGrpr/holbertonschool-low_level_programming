#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of the array
 * @c: char
 *
 * Return: pointer of the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *pc;

	pc = malloc(sizeof(char) + size);

	if (pc == NULL || size == 0)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		pc[n] = c;
	}
	return (pc);

}
