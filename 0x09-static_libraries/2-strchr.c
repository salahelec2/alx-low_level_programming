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
	int d;

	d = 0;
	while (s[d] != '\0' && s[d] != c)
	{
		d++;
	}
	if (s[d] == c)
		return (s + d);
	else
		return (NULL);
}
