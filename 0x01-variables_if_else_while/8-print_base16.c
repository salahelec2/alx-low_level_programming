#include <stdlib.h>
#include <stdio.h>

/**
 * main - the entry and the only function
 *
 * Description: 'print from 0 to f'
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet[] = "0123456789abcdef";
	int i;

	for (i = 0; i <= 15 ; ++i)
		putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
