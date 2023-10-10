#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - dog informations
 * @name: name
 * @age: age
 * @owner: owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */
