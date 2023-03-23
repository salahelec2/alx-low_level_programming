#include "main.h"

/**
 * print_most_numbers - only func
 *
 * Description: Print 0 to 9 except 2 and 4 using _putchar
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n = 4)
			;
		else
			_putchar(n + 48);
	}
	_putchar(10);
}
