#include "main.h"
/**
 * is_prime_number -  returns 1 if the input integer is a prime number.
 * @n: a number
 * @i: a number
 *
 * Return: 0
 */

int is_prime_helper(int n, int i);

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper -  returns 1 if the input integer is a prime number.
 * @n: a number
 * @i: a number
 *
 * Return: 0
 */
int is_prime_helper(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}
