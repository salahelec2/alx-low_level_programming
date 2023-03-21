#include "main.h"
/**
 * main - the entry and the only function
 *
 * Description: 'Print alphabet from a to z'
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ++ch)
		_putchar(ch);
}
