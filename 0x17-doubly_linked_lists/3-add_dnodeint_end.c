#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add element to the end
 * @head: list ptr
 * @n: element in list
 * Return: ptr to new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *start;

	start = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->next = NULL;
		new->nb = n;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (start->next)
	{
		start = start->next;
	}
	start->next = new;
	new->prev = start;
	new->next = NULL;
	new->nb = n;
	return (new);
}
