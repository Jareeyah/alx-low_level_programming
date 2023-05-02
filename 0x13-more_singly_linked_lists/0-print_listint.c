#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - iA function that prints all elements of a list
 * @h: The pointer to the listint_t list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		l++;
	}
	return (l);
}
