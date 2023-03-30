#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse an array
 * @a: array
 * @n: array elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;
	char temp;

	for (i = n - 1, j = 0; i > j; i--, j++)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
}
