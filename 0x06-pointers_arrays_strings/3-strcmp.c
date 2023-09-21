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
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 < *str2)
			return (-1);
		if (*str1 > *str2)
			return (1);
		str1++;
		str2++;
	}
	if (*str1 == '\0' && *str2 == '\0')
		return (0);
	if (*str1 == '\0')
		return (-1);
	return (1);
}
