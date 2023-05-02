#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - A function that add a new node at the end of a list
 * @head: pointer to pointer to the listint_t list
 * @n: int to add in new node
 * Return: The address of the new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *l;
	listint_t *e = *head;

	l = malloc(sizeof(listint_t));

	if (l == NULL)
	{
		return (NULL);
	}

	l->n = n;
	l->next = NULL;

	if (*head == NULL)
	{
		*head = l;
	}
	else
	{
		while (e->next)
		{
			e = e->next;
		}
		e->next = l;
	}
	return (l);
}
