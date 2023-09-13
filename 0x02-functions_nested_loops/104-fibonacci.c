#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fib1 = 1, fib2 = 2, next_term;
	int i;

	printf("%d, %d, ", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		next_term = fib1 + fib2;
		fib1 = fib2;
		fib2 = next_term;

		printf("%d", next_term);

		if (i < 98)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}

