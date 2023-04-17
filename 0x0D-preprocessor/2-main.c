#include "main.h"

/**
 * main - print the c file name origine of this code
 *
 * Return: 0
 */

int main(void)
{
	char *file = __FILE__;
	char *ptr = file;

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar('\n');
	return (0);
}

