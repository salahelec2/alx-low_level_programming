#include "main.h"
#include <string.h>

/**
 * _strncpy - copy up to n characters from the string pointed to
 * @dest: the host string
 * @src: this string will be copied to the host string
 * @n: number of character to be copied
 * Return: concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
