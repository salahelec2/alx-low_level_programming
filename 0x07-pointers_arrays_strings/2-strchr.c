#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locate character in string
 * @dest: First string, second string is appended to it
 * @src: Second string, it is appended to the first
 * Return: dest
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
			return (&s[b]);
	}
	return (NULL);
}
