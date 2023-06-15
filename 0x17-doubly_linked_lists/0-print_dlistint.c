#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints listint_t list elements.
 * @h: doubly linked list head
 * Return: nodes number
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *pointer = h;
	size_t nb = 0;

	while (pointer && pointer->prev)
		pointer = pointer->prev;
	while (pointer)
	{
		printf("%d\nb", pointer->nb);
		nb++;
		pointer = pointer->next;
	}
	return (nb);
}
