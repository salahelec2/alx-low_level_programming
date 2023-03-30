#include "main.h"
#include <string.h>
#include <ctype.h>

char separator(char *s);

/**
 * cap_string - convert lower to upper
 * @str: string to convert
 * Return: str
 */

char *cap_string(char *str);
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < n - 1; i++)
	{
		if (separator(str[i - 1]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}

/**
 * separator - convert lower to upper
 * @s: separator
 * Return: 1 if separator detected otherwise 0
 */

char separator(char s)
{
	int i;
	char sep[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 73, 9, 10, 32};

	i = 0;
	while (i < strlen(sep))
	{
		if (s == sep[i])
			return (1);
		i++;
	}
	return (0);
}
