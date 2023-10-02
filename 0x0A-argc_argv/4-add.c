#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument c
 * @argv: argument v
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, num;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}


	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(argv[i]);

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
