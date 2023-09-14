#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long number = 612852475143;
	unsigned long largest_prime_factor = 1;
	unsigned long divisor = 2;

	while (number > 1)
	{
		if (number % divisor == 0)
		{
			largest_prime_factor = divisor;
			while (number % divisor == 0)
			{
				number /= divisor;
			}
		}
		divisor++;
	}

	printf("%lu\n", largest_prime_factor);

	return (0);
}
