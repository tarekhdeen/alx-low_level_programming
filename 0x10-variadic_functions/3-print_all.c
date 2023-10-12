#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - print char
 * @separator: separator
 * @args: args
 */
void print_char(const char *separator, va_list args)
{
	char c;

	c = va_arg(args, int);
	printf("%s%c", separator, c);
}

/**
 * print_int - print int
 * @separator: separator
 * @args: args
 */
void print_int(const char *separator, va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%s%d", separator, num);
}

/**
 * print_float - print float
 * @separator: separator
 * @args: args
 */
void print_float(const char *separator, va_list args)
{
	float f;

	f = va_arg(args, double);
	printf("%s%f", separator, f);
}

/**
 * print_string - print string
 * @separator: separator
 * @args: args
 */
void print_string(const char *separator, va_list args)
{
	char *str;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		printf("%s(nil)", separator);
	}
	if (str != NULL)
	{
		printf("%s%s", separator, str);
	}
}

/**
 * print_all - print all
 * @format: format
 */
void print_all(const char * const format, ...)
{
	const char *separator = "";
	int i = 0;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_char(separator, args);
				break;
			case 'i':
				print_int(separator, args);
				break;
			case 'f':
				print_float(separator, args);
				break;
			case 's':
				print_string(separator, args);
				break;
		}

		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
