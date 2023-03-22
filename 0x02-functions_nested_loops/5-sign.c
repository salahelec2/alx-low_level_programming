#include "main.h"
#ifdef _putchar
#define _putchar
#include "_putchar.c"
#endif

/**
 * print_sign - test the signe of given number
 * @n: The number to check
 *
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	switch ((n > 0) ? 1 : (n < 0) ? -1 : 0)
	{
		case 1:
			_putchar(43);
			return (1);
		case -1:
			_putchar(45);
			return (-1);
		case 0:
			_putchar(48);
			return (0);
	}
}
