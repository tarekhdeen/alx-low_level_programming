#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fib1 = 1, fib2 = 2, next_term, sum = 2;

	while (fib2 <= 4000000)
	{
		next_term = fib1 + fib2;
		fib1 = fib2;
		fib2 = next_term;

		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}
	}

	printf("%d\n", sum);

	return (0);
}

