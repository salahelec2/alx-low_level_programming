#include "main.h"

/**
 * _strcpy - print half
 **@src: string source
 **@dest: destination to write string
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
