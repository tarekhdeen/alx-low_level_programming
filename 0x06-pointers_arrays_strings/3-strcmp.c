#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
			return (-1);
		if (*s1 > *s2)
			return (1);
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	if (*s1 == '\0')
		return (-1);
	return (1);
}
