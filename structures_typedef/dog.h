#ifndef DOG_H
#define DOG_H

/**
 * struct dog - name, age, owner informations
 * @name: char * member
 * @age: float member
 * @owner: char * member
 *
 * Description: This structure will compile informations about dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
