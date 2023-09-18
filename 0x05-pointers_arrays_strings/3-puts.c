#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string.
 * @str: Printed string.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
