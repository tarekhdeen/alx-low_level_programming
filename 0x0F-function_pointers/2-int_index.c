#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: A pointer to an array of integers.
 * @size: The number of elements in the array.
 * @cmp:  A pointer to a function.
 *
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (cmp == NULL)
	{
		return(-1);
	}

	if (cmp != NULL)
	{
		int i;

		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
