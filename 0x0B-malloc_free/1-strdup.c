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
	int len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	if (str == NULL)
		return (NULL);
	str_2 = (char *)  malloc((len + 1) * sizeof(char));
	if (str_2 == NULL)
		return (NULL);
	strcpy(str_2, str);
	return (str_2);
}
