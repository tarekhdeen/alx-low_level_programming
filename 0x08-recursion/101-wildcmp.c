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
		if (*s2 == '\0' || (*s2 == '*' && wildcmp(s1, s2 + 1)))
		{
			return (1);
		}
	}

	if (*s2 == '\0')
	{
		return (0);
	}

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
