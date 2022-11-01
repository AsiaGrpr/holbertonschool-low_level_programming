#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 *	parameter on each element of an array
 * @array: array to use
 * @size: size of the array to use
 * @action: pointer to function to execute
 *
 * Return: Null value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
