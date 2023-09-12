#include <stdio.h>
#include "main.h"

/**
 * _putstr - writes a string to stdout
 *
 * @str: The string to print
 */
void _putstr(char str[])
{int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
		_putstr(str);
		_putchar('\n');
	return (0);
}
