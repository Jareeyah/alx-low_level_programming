#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in a linked
 *                dlistint_t list
 * @h: This is the head of the node
 * Return: The number of number
 */
size_t dlistint_len(const dlistint_t *h)
{
	int a = 0;

	if (h == NULL)
	{
		return (a);
	}

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
