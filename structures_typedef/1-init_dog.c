#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer on struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's name owner
 *
 * Return: NULL value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		printf("OK");

	d->name = name;
	d->age = age;
	d->owner = owner;
}
