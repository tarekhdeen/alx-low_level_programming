#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print opcodes
 * @num_bytes: Bytes numbers
 */
void print_opcodes(int num_bytes)
{
	int i;
	unsigned char *ptr = (unsigned char *)print_opcodes;

	if (ptr == NULL || print_opcodes == NULL)
	{
		return;
	}

	if (ptr != NULL || print_opcodes != NULL)
	{
		for (i = 0; i < num_bytes; i++)
		{
			printf("%02x", *(ptr + i));
		}
	}

	printf("\n");
}

/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}
