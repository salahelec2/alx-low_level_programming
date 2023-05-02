#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the first element in the list
 * @n: int to insert to the end 
 *
 * Return: pointer to the New node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *BrandNew;
	listint_t *tmp = *head;

	BrandNew = malloc(sizeof(listint_t));
	if (!BrandNew)
		return (NULL);
	(*BrandNew).n = n;
	(*BrandNew).next = NULL;
	if (*head == NULL)
	{
		*head = BrandNew;
		return (BrandNew);
	}
	while ((*tmp).next)
		tmp = (*tmp).next;
	(*tmp).next = BrandNew;
	return (BrandNew);
}
