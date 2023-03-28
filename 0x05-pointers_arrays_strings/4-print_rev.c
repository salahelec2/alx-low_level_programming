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

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			i--;
			continue ;
		}
		_putchar(s[i]);
		i--;

	}
	_putchar(10);
}
