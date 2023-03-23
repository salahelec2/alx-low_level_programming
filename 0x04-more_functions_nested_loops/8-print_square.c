#include "main.h"

/**
 * print_square - entry point
 *
 * Description: Prints square using #
 *@size: size of square
 * Return: void
 */

void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
