#include "main.h"

/**
 * puts2 - print half
 **@str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = 0 ; j <= i; j++)
	{
		if (str[j] == '\0')
			continue;
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar(10);
}
