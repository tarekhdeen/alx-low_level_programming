#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name.
 * @name: name.
 * @f: a pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
	f(name);
	}
}

/**
 * print_string - print a string
 * @str: a string
 */
void print_string(char *str)
{
	printf("%s\n", str);
}
