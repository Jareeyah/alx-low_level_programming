#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the end of a
 * dlistint_t list
 * @head: The head of the list
 * @n: The new node to be added
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *a;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	a = *head;

	if (a != NULL)
	{
		while (a->next != NULL)
			a = a->next;
		a->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = a;
	return (new);
}

