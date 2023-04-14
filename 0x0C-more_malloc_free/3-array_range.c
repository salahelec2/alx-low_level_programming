#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocate memory for array of ints.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the memory allocation for array.
 * NULL if min>max of malloc fails.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	i = 0;
	if (min > max)
		return (NULL);
	array = malloc(sizeof(*array) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
