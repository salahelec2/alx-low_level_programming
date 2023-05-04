#include "main.h"

/**
 * set_bit - bit set
 * @n: pointer to unsigned int variable
 * @index: bit index
 *
 * Return: 1 on sucess, -1 on faillure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}
