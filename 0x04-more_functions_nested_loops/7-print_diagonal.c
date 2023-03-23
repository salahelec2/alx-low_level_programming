#include "main.h"

/**
 * print_diagonal - entry point
 *
 * Description: Prints diagonals
 *@n: number of spaces
 * Return: void
 */

void print_diagonal(int n)
{
	int diag, lines;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (diag = 1; diag <= n; diag++)
		{
			if (diag > 1)
			{
				for (lines = 1; lines <= diag - 1; lines++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar(10);
		}
	}
}
