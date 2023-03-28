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
	char temp;
	char *ax;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (s[j] == '\0')
			{
				j++;
				continue;
			}
		temp = s[j];
		ax = &s[i];
		*ax = temp;
		s[i] = temp;
		i++;
	}
}
