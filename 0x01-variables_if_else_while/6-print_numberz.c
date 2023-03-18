#include <stdlib.h>
#include <stdio.h>

/**
 * main - the entry and the only function
 *
 * Description: 'print from 0 to 9'
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9 ; ++i)
		putchar(i + 48);
	putchar('\n');
	return (0);
}
