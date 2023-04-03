#include "main.h"
#include <stdlib.h>

/**
 * _strspn - find number of occurence in a string
 * @s : string to search in
 * @accept : searched word
 * Return: lenght
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i, sec, str, wc, oldn;

	i = 0, sec = 0, n = 0, oldn = 0;
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
		oldn = n;
		for (wc = 0; wc < sec; wc++)
		{
			if (s[str] == accept[wc])
				n++;
		}
		if (oldn == n)
			break;
	}
	return (n);
}
