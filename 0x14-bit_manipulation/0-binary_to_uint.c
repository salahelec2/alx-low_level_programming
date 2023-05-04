#include "main.h"

/**
 * binary_to_uint - binary to unsigned int converter
 * @b: binary.
 *
 * Return: converted binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int length, bin;

	if (!b)
		return (0);

	result = 0;

	length = 0;
	while (b[length] != '\0')
	{
		length++;
	}

	for (length--, bin = 1; length >= 0; length--, bin *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
		if (b[length] & 1)
		{
			result += bin;
		}
	}

	return (result);
}
