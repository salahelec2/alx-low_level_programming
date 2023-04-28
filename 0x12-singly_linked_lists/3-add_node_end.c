#include "lists.h"

/**
 * add_node_end - adds acreated node at the end
 * @head: head of the linked list.
 * @str: string to copy in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *created_node, *this_node;
	size_t n;

	created_node = malloc(sizeof(list_t));
	if (created_node == NULL)
		return (NULL);

	created_node->str = _strdup(str);

	for (n = 0; str[n]; n++)
		;

	created_node->len = n;
	created_node->next = NULL;
	this_node = *head;

	if (this_node == NULL)
	{
		*head = created_node;
	}
	else
	{
		while (this_node->next != NULL)
			this_node = this_node->next;
		this_node->next = created_node;
	}

	return (*head);
}

/**
 * _strdup - duplicates a string.
 * @s: the string.
 *
 * Return: duplicated string.
 */

char *_strdup(const char *s)
{
	size_t len = 0, i;
	char *dup = NULL;

	while (s[len] != '\0')
		len++;

	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = s[i];

	return (dup);
}

/**
 * _strlen - count lenght of a string.
 * @s: the string.
 *
 * Return: string len.
 */

int _strlen(const char *s)
{
	int elm = 0;

	for (; s[elm]; elm++)
		;
	return (elm);
}
