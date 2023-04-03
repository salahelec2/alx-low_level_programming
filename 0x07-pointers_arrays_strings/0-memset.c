#include "main.h"

/**
 * _memset - set momory location to a specific byte
 * @s: string to be modified
 * @b: word filler
 * @n: number of elements to fill
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
