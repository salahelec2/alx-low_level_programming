#include "main.h"

/**
 * swap - swap value of 2 integers
 *@a: 1st integer
 *@b: 2nd integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
