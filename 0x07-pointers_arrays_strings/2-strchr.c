#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locate character in string
 * @s: string to search in
 * @c: char to be found
 * Return: pointer to the first char found
 *
 */
char *_strchr(char *s, char c)
{
	int d, b;

	d = 0;
	while (s[d] != '\0')
	{
		d++;
	}
	for (b = 0; b < d; b++)
	{
		if (s[b] == c)
			return (s + i);
	}
	return (NULL);
}
