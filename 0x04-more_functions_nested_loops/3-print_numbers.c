#include "main.h"

/**
 * print_numbers - the only function
 *
 * Description: Print from 0 to 9 using _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + 48);
	}
	_putchar(10);
}
