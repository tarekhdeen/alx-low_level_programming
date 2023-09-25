#include "main.h"
#include <unistd.h>

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: a 2D array a of size 8x8
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				write(1, &a[i][j], 1);
			}
			else
			{
				write(1, &a[i][j], 1);
			}
		}
		write(1, "\n", 1);
	}
}
