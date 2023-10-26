#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that converts binary number to an unsigned int.
 * @b:  is pointing to a string of 0 and 1 chars.
 *
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);


	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		result = (result << 1) + (b[i] - '0');
		i++;
	}

	return (result);
}
