#include "main.h"

/**
 * get_bit - know the value of an indexed bit
 * @n: data input
 * @index: index of the bit.
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int incr;

	if (n == 0 && index < 64)
		return (0);

	for (incr = 0; incr <= 63; n >>= 1, incr++)
	{
		if (index == incr)
		{
			return (n & 1);
		}
	}

	return (-1);
}
