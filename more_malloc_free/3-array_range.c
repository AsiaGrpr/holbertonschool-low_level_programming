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
	int i = min, j = 0;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * ((max - min) + 1));

	if (p == 0)
		return (NULL);

	while (i <= max)
	{
		p[j] = i;
		i++;
		j++;
	}
	return (p);
}
