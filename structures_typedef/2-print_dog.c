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
		(d->name != NULL) ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
		(d->age != 0.0) ? printf("Age: %f\n", d->age) : printf("Age: 0.000000\n");
		(d->owner != NULL) ? printf("Owner: %s\n", d->owner) :
			printf("Owner: (nil)\n");
	}
}
