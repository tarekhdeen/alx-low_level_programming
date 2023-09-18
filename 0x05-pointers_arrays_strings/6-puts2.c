#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string.
 * @str: a printed string.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		(i + 1) / 2;
	}
	printf("\n");
}
