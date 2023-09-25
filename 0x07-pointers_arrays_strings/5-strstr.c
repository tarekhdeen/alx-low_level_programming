#include "main.h"
#include <stddef.h>

/**
 * _strstr -  a function that locates a substring.
 * @haystack: Points to the string where you want to search.
 * @needle: Points to the substring you're looking for.
 *
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
