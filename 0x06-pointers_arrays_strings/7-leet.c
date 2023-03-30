#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * leet - encodes a sting into 1337 format
 * @str: The string in question
 * Return: str
 */

char *leet(char *str)
{
	unsigned int i, j, len;

	char letters[] = "aAeEoOtTlL";
	char nbrs[] = "4433007711";

	len = strlen(str);

	for (i = 0; i < len ; i++)
	{
		for (j = 0; j < strlen(letters); j++)
		{
			if (str[i] == letters[j])
				str[i] = nbrs[j];
		}
	}
	return (str);
}
