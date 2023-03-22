#include "main.h"

/**
* times_table - print 9 times table starting with 0.
*
* Return:0
*/
void times_table(void)
{
	int col, row, mult;

	mult = 1;
	for(row = 0; row < 10; row++)
		{
		_putchar(48);
		for(col = mult; col <= mult * 9; col += mult)
		{
		_putchar(44);
		if(col < 9 || col == 9)
			{
			_putchar(32);
			_putchar(32);
			_putchar(col + 48);
			}
		else if(col > 9)
			{
			_putchar(32);
			_putchar((col / 10) + 48);
			_putchar((col % 10) + 48);
			}
		}
		_putchar(10);
		mult++;
		}
}
