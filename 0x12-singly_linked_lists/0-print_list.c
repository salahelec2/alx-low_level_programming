#include "lists.h"

/**
 * print_list - print the elements of a linked list.
 * @h: liked list of type struct list_s.
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", (*h).len, (*h).str);
		h = (*h).next;
		elements++;
	}
	return (elements);
}
