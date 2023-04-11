#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - create an aray of size n and fill it with given char
 *
 * @size: number of element of the array
 * @c: filler char
 *
 * Return: filled array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *s;

	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
	{
		printf("failed to allocate memory");
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		s[n] = c;
	}
	return (s);
}
