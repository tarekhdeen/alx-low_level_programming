#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers.
 *
 * Return: Always 0
 */
int main(void)
{
	int num1, num2, mul;

	scanf("%d %d", &num1, &num2);

	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		exit(98);
	}

	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);
}
