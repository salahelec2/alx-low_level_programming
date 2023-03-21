#include "main.h"
/**
 * main - the entry and the only function
 *
 * Description: 'Print _putchar'
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char c[]="_putchar\n";

	for (i = 0; i <= 8; i++)
		_putchar(c[i]);
	return 0;
}
