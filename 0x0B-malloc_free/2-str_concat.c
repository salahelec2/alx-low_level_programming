#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string or null on faillure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	;
	str = (char *)  malloc(((i + j) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		str[i + j] = s2[j];
	return (str);
}
