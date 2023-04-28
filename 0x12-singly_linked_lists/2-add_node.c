#include "lists.h"

char *_strdup(const char *s);
int _strlen(const char *s);

/**
 * add_node - create new node to a linked list.
 * @head: head of the linked list.
 * @str: string to add.
 *
 * Return: pointer to the new added element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	(*new).str = _strdup(str);
	(*new).len = _strlen(str);
	(*new).next = *head;
	*head = new;
	return (new);
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

