#include <stdlib.h>
#include <stdio.h>

/**
 * main - the entry and the only function
 *
 * Description: 'print from z to a'
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0 ; --i)
		putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
