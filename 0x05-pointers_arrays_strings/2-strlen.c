#include "main.h"

/**
 * _strlen - return string length
 *@s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len, i;
	
	len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
