#include "main.h"
#include <stdio.h>

/**
 * print_array - print half print specified ele;ents of array
 **@a: array
 **@n: number of element to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			break;
		printf("%d, ",*(a + i));
	}
	if (n > 0)
		printf("%d",*(a + i));	
	putchar(10);
}
