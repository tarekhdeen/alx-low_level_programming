#include "main.h"

/**
 * wildcmp - a function that compares two strings.
 * @s1: a string
 * @s2: a string
 *
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		while (*s2 == '*')
		{
			s2++;
		}
		return (*s2 == '\0');
	}

	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
