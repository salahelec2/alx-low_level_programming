#include "main.h"

/**
 * print_chessboard - print elements of multi dimentional array
 * @a : string to be printed
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8 ; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		if (i != 7)
			_putchar('\n');
	}
}
