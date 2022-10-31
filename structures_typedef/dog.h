#ifndef DOG_H
#define DOG_H

/**
 * struct dog my_dog - name, age, owner informations
 * @name: char * member
 * @age: float member
 * @owner: char * member
 *
 * Description: This structure will compile informations about dog
 */
typedef struct dog my_dog

struct my_dog
{
	char *name;
	float age;
	char *owner;
};


#endif
