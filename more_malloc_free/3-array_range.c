#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: min value of the array
 * @max: max value of the array
 *
 * Return: pointer or NULL value
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * ((max - min) + 1));

	if (p == 0)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		p[i] = i;
	}
	return (p);
}
