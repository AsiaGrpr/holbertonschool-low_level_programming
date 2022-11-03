#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_dog - function that frees dogs
 * @d: pointer to function to free
 *
 * Return: NULL value
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
