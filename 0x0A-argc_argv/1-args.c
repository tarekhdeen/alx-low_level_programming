#include "main.h"

/**
 * main - Entry point
 * @argc:stands for argument count.
 * @argv:stands for argument vector.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count = argc - 1;

	while (count > 0)
	{
		_putchar('0' + (count % 10));
		count /= 10;
	}

	_putchar('\n');

	return (0);
}
