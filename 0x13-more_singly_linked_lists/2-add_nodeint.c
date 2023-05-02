#include "lists.h"

/**
 * add_nodeint - adds a BrandNew node to the front of linked-list
 * @head: pointer to the head
 * @n: value to be added to the list
 *
 * Return: pointer to the BrandNew node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *BrandNew;

	BrandNew = malloc(sizeof(listint_t));
	if (!BrandNew)
		return (NULL);

	(*BrandNew).n = n;
	(*BrandNew).next = *head;
	*head = BrandNew;

	return (BrandNew);
}
