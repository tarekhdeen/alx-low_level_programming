#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to the first element of the array.
 * @n: the number of elements of the array.
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i] + '0');
		_putchar(',');
		_putchar(' ');
	}

		_putchar('\n');

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i] + '0');
		_putchar(',');
		_putchar(' ');
	}

		_putchar('\n');
}
