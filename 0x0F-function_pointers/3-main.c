#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(num1, num2));

	return (0);
}
