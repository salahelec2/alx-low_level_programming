#include "main.h"

/**
 * print_rev - print in revers
 *@s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, j;

	int i = 0;
	int j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i)
	{
		_putchar(s[i]);
		i--;
	}
}
