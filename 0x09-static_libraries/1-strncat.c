#include "main.h"
#include <string.h>

/**
 * _strncat - append dest using src string by n char
 * @dest: the host string
 * @src: this string will be apended to the host string
 * @n: number of character to be appended by
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
