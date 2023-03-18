#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the entry and the only function
 *
 * Description: 'print from a to z except e and q'
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i <= 23 ; ++i)
		putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
