#include "lists.h"

/**
 * listint_len - count the number of elements of linked list
 * @h: pointer to a linked list
 *
 * Return: nodes count
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = (*h).next;
	}

	return (number);
}
