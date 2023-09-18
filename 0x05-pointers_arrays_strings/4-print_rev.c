#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse.
 * @s: a string to be printed.
 */
void print_rev(char *s)
{
	int length = 0;
	char *end = s;
	int i;

	while (*end != '\0')
	{
		length++;
		end++;
	}


	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
