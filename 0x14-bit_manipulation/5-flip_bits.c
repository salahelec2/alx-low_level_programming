#include "main.h"

/**
 * flip_bits - return number of bits to be fliped in order to get m
 * @n: variable 1
 * @m: variable 2
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;

	for (bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits++;
	}

	return (bits);
}
