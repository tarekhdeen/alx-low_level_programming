#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: mydog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog = (dog_t *)malloc(sizeof(dog_t));

	if (mydog == NULL)
	{
		return (NULL);
	}


	mydog->name = (char *)malloc(strlen(name) + 1);
	mydog->owner = (char *)malloc(strlen(owner) + 1);

	if (mydog->name == NULL || mydog->owner == NULL)
	{

		free(mydog->name);
		free(mydog->owner);
		free(mydog);
		return (NULL);
	}

	strcpy(mydog->name, name);
	mydog->age = age;
	strcpy(mydog->owner, owner);

	return (mydog);
}
