#include "main.h"

/**
 * _memset - Conacatenates two strings together
 * @s: string to be modified
 * @b: word filler
 * @n: number of elements to fill
 * Return: dest
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
