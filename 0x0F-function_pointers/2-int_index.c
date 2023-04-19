#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: The given array
 * @size: Array size
 * @cmp: function pointer
 *
 * Return: returns the index of the first element returned by cmp
 *         -1 no element matches
 *         -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int indexOf;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (indexOf = 0; indexOf < size; indexOf++)
	{
		if ((cmp(array[indexOf])) == 1)
		{
			return (indexOf);
		}
	}
	return (-1);
}
