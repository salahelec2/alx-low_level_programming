#include "main.h"

/**
 * print_sign - test the signe of given number
 * @n: The number to check
 *
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	switch ((n > 0) ? 1 : (n < 0) ? -1 : 0) {
		case 1:
			return (1);
			_putchar(43);
			break;
		case -1:
			return (-1);
			_putchar(45);
			break;
		case 0:
			return (0);
			_putchar(48);
			break;
	}
}
