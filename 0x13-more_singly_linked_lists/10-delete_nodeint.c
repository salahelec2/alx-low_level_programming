#include "lists.h"

/**
 * delete_nodeint_at_index - delete node in specific index
 * @head: ponter to first node
 * @index: node to be deleted
 *
 * Return: 1 on success, 0 on faillure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *this = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
	}
	this = tmp->next;
	tmp->next = this->next;
	free(this);
	return (1);
}
