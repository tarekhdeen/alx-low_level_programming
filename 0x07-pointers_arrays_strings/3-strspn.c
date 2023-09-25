#include "main.h"
#include <stddef.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: Points to the string you want to analyze.
 * @accept: Points to a list of characters you like.
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}

	return (count);
}
