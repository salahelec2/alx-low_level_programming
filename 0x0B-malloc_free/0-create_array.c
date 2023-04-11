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
	char *ptr;

	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		ptr[n] = c;
	}
	return (ptr);
}
