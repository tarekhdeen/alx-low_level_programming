#include "main.h"
#include <stddef.h>

/**
 *  * _strchr - a function that locates a character in a string.
 *   * @s: Points to the string where you want to search for the character.
 *    * @c: Is the character you're looking for.
 *     *
 *      * Return: s
 *       */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
