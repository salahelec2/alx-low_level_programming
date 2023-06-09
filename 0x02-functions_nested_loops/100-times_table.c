#include "main.h"

/**
* print_times_table - print n times table starting with 0.
* @t: number of times
*
* Return:0
*/
void print_times_table(int t)
{
	int col, row, mult = 1, n = 0, i;

	if (t > 15 || t < 0)
		return;
	_putchar(48);
	while (n++ < t)
		{
		_putchar(44);
		for (i = 0; i < 3; i++)
			_putchar(32);
		_putchar(48);
		}
	_putchar(10);
	for (row = 0; row < t; row++)
		{
		_putchar(48);
		for (col = mult; col <= mult * t; col += mult)
		{
		_putchar(44);
		_putchar(32);
		if (col < 9 || col == 9)
			{
			_putchar(32);
			_putchar(32);
			}
		else if (col > 9 && col <= 99)
			{
			_putchar(32);
			_putchar((col / 10) + 48);
			}
		else if (col > 99)
			{
			_putchar((col / 100) + 48);
			_putchar((col % 100) / 10 + 48);
			}
		_putchar((col % 10) + 48);
		}
		mult++;
		_putchar(10);
		}
}
