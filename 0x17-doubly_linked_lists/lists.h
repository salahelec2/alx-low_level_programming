#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

void free_dlistint(dlistint_t *head);
size_t print_dlistint(const dlistint_t *h);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
#endif
