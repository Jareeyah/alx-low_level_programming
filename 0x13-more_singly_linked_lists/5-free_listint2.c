#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: The pointer to pointer to the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *l;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		l = (*head)->next;
		free(*head);
		*head = l;
	}
	*head = NULL;
}
