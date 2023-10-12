#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print any thing
 * @format: a constant format string
 */
void print_all(const char * const format, ...)
{
	const char *separator = "";
	int i = 0;	char *str;	char c;
	int num;	double d;	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", separator, c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%s%d", separator, num);
				break;
			case 'f':
				d = va_arg(args, double);
				printf("%s%f", separator, d);
				break;
			case 's':
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

		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}

