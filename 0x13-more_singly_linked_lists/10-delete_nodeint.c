#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes the node at index of list
 * @head: The pointer to pointer to the listint_t linked list
 * @index: Is the index of the node that should be deleted
 * Return: 1 if it succeeded, otherwise -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *l = *head;
	listint_t *d = NULL;
	unsigned int n = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(l);
		return (1);
	}
	while (n < index - 1)
	{
		if (l == NULL)
		{
			if (l->next == NULL)
			{
				return (-1);
				l = l->next;
				n++;
			}
		}
	}
		
		d = l->next;
		l->next = d->next;
		free(d);

		return (1);
}
