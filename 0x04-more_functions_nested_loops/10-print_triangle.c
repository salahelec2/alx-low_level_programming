#include "main.h"
/**
 * print_triangle - entry point
 *
 * Description: Prints triangle using #
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size);
{
	int empty, hash, row;

	if (size <= 0)
	{
		_putchar(32);
		return;
	}
	for (row = 1; row <= size; row++)
	{
		empty = size - row;
		for (hash = 1; hash <= size; hash++)
		{
			if (empty >= 0)
				_putchar(32);
			else
				_putchar(35);
			empty--;
		}
		_putchar(10);
	}
}

