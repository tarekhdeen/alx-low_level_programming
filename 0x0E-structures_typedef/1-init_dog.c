#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a dog
 * @d: structure
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}