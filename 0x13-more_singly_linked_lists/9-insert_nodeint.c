#include "lists.h"

/**
 * insert_nodeint_at_index - add new node to specific index with value
 * @head: pointer to the first node in the list
 * @idx: index of brandNew node
 * @n: data of brandNew node
 *
 * Return: pointer adress of brandNew node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *brandNew;
	listint_t *tmp = *head;

	brandNew = malloc(sizeof(listint_t));
	if (!brandNew || !head)
		return (NULL);

	brandNew->n = n;
	brandNew->next = NULL;

	if (idx == 0)
	{
		brandNew->next = *head;
		*head = brandNew;
		return (brandNew);
	}

	i = 0;
	while (tmp && i < idx)
	{
		if (i == idx - 1)
		{
			brandNew->next = tmp->next;
			tmp->next = brandNew;
			return (brandNew);
		}
		else
		{
			tmp = tmp->next;
			i++;
		}
	}
	return (NULL);
}
