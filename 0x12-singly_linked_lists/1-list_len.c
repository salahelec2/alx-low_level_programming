#include "lists.h"

/**
 * list_len - count the number of elements in linked list.
 * @h: ponter to the first element of the list.
 *
 * Return: elements number of the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = (*h).next;
	}
	return (elements);
}
