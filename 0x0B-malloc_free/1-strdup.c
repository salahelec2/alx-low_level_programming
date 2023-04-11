#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - return a pointer to a memory filled with given string
 *
 * @str: the given string
 *
 * Return: pointer to memory or NULL when insufficient memory
 */
char *_strdup(char *str)
{
	char *str_2;
	int len, cp;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	if (str == NULL)
		return (NULL);
	str_2 = (char *)  malloc((len + 1) * sizeof(char));
	if (str_2 == NULL)
		return (NULL);
	for (cp = 0; cp <= len; cp++)
	{
		str_2[cp] = str[cp];
	}
	str_2[len + 1] = '\0';
	return (str_2);
}
