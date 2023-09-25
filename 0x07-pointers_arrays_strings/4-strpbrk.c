#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: Points to the string you want to search in.
 * @accept: Points to a list of characters you're looking for.
 *
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
