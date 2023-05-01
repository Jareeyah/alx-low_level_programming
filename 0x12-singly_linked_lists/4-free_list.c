#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that frees a list_t list
 * @head: The pointer to list to be freed
 */
void free_list(list_t *head)
{
	list_t *f;

	while (head != NULL)
	{
		f = head;
		head = head->next;
		free(f);
	}
}
