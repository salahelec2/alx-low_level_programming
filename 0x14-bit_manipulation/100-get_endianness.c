#include "main.h"

/**
 * get_endianness - verify endianness
 *
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *chr = (char *)&n;

	if (*chr)
		return (1);
	else
		return (0);
}

