#include "main.h"

/**
 * print_number - check the code
 * @n: integer to print
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	int digit = 0, temp, i;
	unsigned int devider;

	if (n < 0)
	{
		n = -n;
		_putchar(45);
	}
	temp = n;
	do {
		temp /= 10;
		digit++;
	} while (temp != 0);
	for (i = digit; i - 1 > 0; i--)
	{
		devider = 10;
		temp = i - 1;
		while (temp > 1)
		{
			devider *= 10;
			temp--;
		}
		_putchar((n / devider) % 10 + 48);
		}
	_putchar(n % 10 + 48);
}
