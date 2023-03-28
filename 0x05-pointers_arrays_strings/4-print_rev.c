#include "main.h"

/**
 * print_rev - print in revers
 *@s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 1;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(10);
}
