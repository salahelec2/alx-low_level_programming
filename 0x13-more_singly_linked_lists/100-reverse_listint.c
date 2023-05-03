#include "lists.h"

/**
 * reverse_listint - Inverse a linked list
 * @head: pointer to the first node
 *
 * Return: adress to the first node of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prior = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prior;
		prior = *head;
		*head = next;
	}
	*head = prior;
	return (*head);
}
