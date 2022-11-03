#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - function that create a new struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's name owner
 *
 * Return: NULL value
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j, k;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	i = strlen(name) + 1;
	j = strlen(owner) + 1;

	dog->name = malloc(sizeof(char) * i);

	if ((*dog).name == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		dog->name[k] = name[k];
	}
	dog->age = age;
	dog->owner = malloc(sizeof(char) * j);

	if ((*dog).owner == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < j; k++)
	{
		dog->owner[k] = owner[k];
	}
	return (dog);
}
