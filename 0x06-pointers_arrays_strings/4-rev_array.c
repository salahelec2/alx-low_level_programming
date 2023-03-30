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
	int first, last, tmp;

	first = 0;
	last = n - 1;
	while (first < last)
	{
		tmp = a[first];
		a[first] = a[last];
		a[last] = tmp;
		first++;
		last--;
	}
}
