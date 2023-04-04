#include "main.h"
#include <stdlib.h>

/**
 * _strstr - find the first occurence of the sub string
 * @haystack : string to search in
 * @needle : substring or the search word
 * Return: pointer to the beginning of the located substr
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int hl, nl, i, j;

	hl = 0, nl = 0;
	while (haystack[hl] != '\0')
	{
		hl++;
	}
	while (needle[nl] != '\0')
	{
		nl++;
	}
	for (i = 0; i <= hl - nl; i++)
	{
		for (j = 0; j < nl; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (j == nl)
		return (&haystack[i]);
	}
	return (NULL);
}
