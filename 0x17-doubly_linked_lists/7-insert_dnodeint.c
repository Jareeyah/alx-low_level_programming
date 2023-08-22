#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts a new node at a
 * given position
 * @h: The head of the list
 * @idx: Is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: The node to be inserted
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *a, *d;
	unsigned int i = 0;

	if (*h == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	a = *h;
	while (a)
	{
		if (idx == i)
		{
			new->n = n;
			d = a->prev;
			new->next = a;
			new->prev = d;
			d->next = new;
			return (*h);
		}
		a = a->next;
		i++;
	}
	return (NULL);
}
