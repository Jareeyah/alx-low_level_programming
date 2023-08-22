#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index index of
 * a dlistint_t linked list
 * @head : The head of the list
 * @index: Is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new, *a, *d;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (-1);
	}
	a = *head;
	while (a)
	{
		if (index == i)
		{
			d = a->prev;
			new = a->next;
			a->prev = d;
			a->next = new;
			return (1);
		}
		a = a->next;
		i++;
	}
	return (-1);
}
