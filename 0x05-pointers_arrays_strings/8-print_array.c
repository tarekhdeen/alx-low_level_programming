#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: printed array.
 * @n: the number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
	printf(", ");
		}
	}

	printf("\n");
}