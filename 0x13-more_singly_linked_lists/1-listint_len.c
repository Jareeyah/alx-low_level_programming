#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - A function that returns number of elements in a linked list
 * @h: The pointer to the linked listint_t list
 * Return: Number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		h = h->next;
	}
	return (s);
}
