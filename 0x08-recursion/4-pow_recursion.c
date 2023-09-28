#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x to the power of y.
 * @x: a number to be raised.
 * @y: a number of power.
 *
 * Return: pow(x, y)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
