#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - create new element to beginning of list
 * @head: pointer
 * @n: element in list
 * Return: the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newly;

	newly = malloc(sizeof(dlistint_t));
	if (newly == NULL)
		return (NULL);
	newly->prev = NULL;
	newly->next = *head;
	newly->n = n;
	if (*head != NULL)
		(*head)->prev = newly;
	*head = newly;
	return (newly);
}
