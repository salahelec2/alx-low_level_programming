#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - convert lower to upper
 * @str: string to convert
 * Return: void
 */

char *string_toupper(char *str)
{
	int i, strl;

	strl = strlen(str)
	for (i = 0; i < strl; i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}

