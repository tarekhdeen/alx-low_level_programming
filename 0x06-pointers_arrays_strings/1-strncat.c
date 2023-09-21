#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest:  is a string where we want to append (concatenate) src to.
 * @src:  is the string that we want to add to the end of dest.
 * @n: the maximum number of bytes to concatenate.
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
