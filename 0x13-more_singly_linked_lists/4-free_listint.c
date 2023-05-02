#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a listint_T list
 * @head: The pointer to list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *l;

	while (head != NULL)
	{
		l = head->next;
		free(head);
		head = l;
	}
}
