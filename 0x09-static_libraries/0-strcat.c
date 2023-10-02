#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 *  * _strcat - Concatenates two strings
 *   * @dest: The string to be strted.
 *    * @src: The string to be appends.
 *     *
 *      * Return: dest.
 *       */
char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
