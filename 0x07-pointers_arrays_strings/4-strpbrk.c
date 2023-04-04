#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - find the first occurence of the sub string
 * @s : string to search in
 * @accept : search word
 * Return: pointer to the byte that matches accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int  i, sec, str, wc;

	i = 0, sec = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (accept[sec] != '\0')
	{
		sec++;
	}
	for (str = 0; str < i; str++)
	{
		for (wc = 0; wc < sec; wc++)
		{
			if (s[str] == accept[wc])
				return (&s[str]);
		}
	}
	return (NULL);
}
