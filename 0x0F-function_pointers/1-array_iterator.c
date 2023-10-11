#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter.
 * @array: a pointer to an array of integers.
 * @size: the size (number of elements) in the array.
 * @action: a pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL)
	{
		return;
	}

	if (action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
