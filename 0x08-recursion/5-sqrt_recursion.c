#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of number.
 * @n: a number.
 * @guess: the current guess for the square root.
 *
 * Return: sqrt of n.
 */
int sqrt_helper(int n, int guess);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - a helper function that uses recursion to find the square root.
 * @n: a number.
 * @guess: the current guess for the square root.
 *
 * Return: sqrt of n.
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, guess + 1));
}
