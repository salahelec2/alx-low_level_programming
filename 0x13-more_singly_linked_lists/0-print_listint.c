#include "lists.h"

/**
 * print_listint - print every element of a linked list
 * @h: ponter to linked list
 *
 * Return: nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = (*h).next;
	}
	return (number);
}
