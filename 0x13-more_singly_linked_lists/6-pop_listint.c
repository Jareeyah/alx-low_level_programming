#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: The pointer to pointer to listint_t list
 * Return: 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *l;
	int p;

	if (head == NULL)
	{
		return (0);
	}
	if (*head == NULL)
	{
		return (0);
	}

	p = (*head)->n;
	l = (*head)->next;
	free(*head);
	*head = l;

	return (p);
}
