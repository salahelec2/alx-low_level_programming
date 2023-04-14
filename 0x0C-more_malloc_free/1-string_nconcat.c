#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - add two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory, exit status 98 if fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concString;
	unsigned int str1Len, str2Len, i;

	str1Len = 0, str2Len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[str1Len] != '\0')
		str1Len++;
	while (s2[str2Len] != '\0')
		str2Len++;
	if (n >= str2Len)
		n = str2Len;
	concString = malloc(str1Len + n + 1);
	if (concString == NULL)
		return (NULL);
	for (i = 0; i < str1Len; i++)
	{
		concString[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		concString[str1Len + i] = s2[i];
	}
	concString[str1Len + n] = '\0';
	return (concString);
}

