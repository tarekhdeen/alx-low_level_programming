#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = (rand() % 201) - 100;
	if (n > 0)
	{
	printf("n is positive\n");
	}
	else if (n == 0)
	{
	printf("n is zero\n");
	}
	else
	{
	printf("n is negative\n");
	}
	return (0);
}
