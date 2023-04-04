#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diag sum of a multi dim array
 * @a : string to be printed
 * @size : size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}
	printf("%d, ", sum);
	sum = 0;
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a -= size;
	}
	printf("%d\n", sum);
}
