#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 * @str: a printed string
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;

	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}

	for (int i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
