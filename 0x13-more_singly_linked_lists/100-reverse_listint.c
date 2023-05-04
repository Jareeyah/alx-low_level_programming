#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - A function that reverses a listint_t linked list
 * @head: The pointer to pointer to the linked list
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *l = NULL;
	listint_t *r;

	if (*head == NULL)
	{
		return (NULL);
	}
	while (*head != NULL)
	{
		r = (*head)->next;
		(*head)->next = l;
		l = *head;
		*head = r;
	}

	*head = l;

	return (*head);
}
