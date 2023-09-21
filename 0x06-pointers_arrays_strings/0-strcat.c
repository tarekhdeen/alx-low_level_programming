#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The string to be strted.
 * @src: The string to be appends.
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
