#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: points to a specific box in the memory grid.
 * @b: Is the constant byte we want to use for setting..
 * @n: number of bytes to set.
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
