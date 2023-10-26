#include "main.h"

/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: unsigned long intger
 * @index: unsigned intger
 *
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	return ((n & mask) != 0);
}
