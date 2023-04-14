#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array using malloc.
 * @nmemb: number of members.
 * @size: size of elements in byte.
 *
 * Return: pointer to the allocated memory. NULL if nmemb or size is 0
 * or if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
