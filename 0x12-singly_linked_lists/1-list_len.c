#include "lists.h"
#include <stdlib.h>

/**
 * list_len - A function that returns number of elements in a linked list
 * @h: The pointer to linked list_t list
 * Return: Number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		l++;
		h = h->next;
	}
	return (l);
}
