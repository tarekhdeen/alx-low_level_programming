#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: a bunch of characters
 *
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	int i;
	int size = 0;
	char *cp;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != '\0')
	{
		size++;
	}

	cp = malloc((size + 1) * sizeof(char));

	if (cp == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		cp[i] = str[i];
	}

	cp[size] = '\0';

	return (cp);

}
