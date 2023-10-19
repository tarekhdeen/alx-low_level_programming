#include <stdio.h>
#include "lists.h"

void __attribute__ ((constructor)) my_constructor(void);

/**
 * my_constructor - prints a string before the main function is executed.
 */
void my_constructor(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
