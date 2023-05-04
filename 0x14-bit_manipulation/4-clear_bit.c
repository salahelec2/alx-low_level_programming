#include "main.h"

/**
 * clear_bit - bit clear
 * @n: pointer to variable
 * @index: bit to clear index
 *
 * Return: 1 on success, -1 on faillure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*n & a)
		*n ^= a;

	return (1);
}
