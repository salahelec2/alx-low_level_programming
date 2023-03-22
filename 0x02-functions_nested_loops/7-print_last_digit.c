#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: The number to check
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	unsigned int last;

	if (n < 0)
		n = n * -1;
	last = n % 10;
	_putchar(last + 48);
	return (last);
}
