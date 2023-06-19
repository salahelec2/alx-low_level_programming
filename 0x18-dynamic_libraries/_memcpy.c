#include "main.h"

/**
 * _memcpy - copy string to another by n bytes
 * @dest: receive what is copied from src
 * @src: memory area to copy from
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;
	char *p;

	for (j = 0; j < n; j++)
	{
		p = dest + j;
		*p = src[j];
	}
	return (dest);
}
