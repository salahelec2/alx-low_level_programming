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
int i;
char temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
