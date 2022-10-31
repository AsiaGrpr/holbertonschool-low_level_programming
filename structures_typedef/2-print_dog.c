#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer on struct dog
 *
 * Return: NULL value
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL || d->age == 0.0 || d->owner == NULL)
			printf("(nil)");
	
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
