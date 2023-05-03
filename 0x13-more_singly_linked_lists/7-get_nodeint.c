#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - A function that returns the nth node of a linked list
 * @head: The pointer to the lisint_t list
 * @index: index of the node, starting at 0
 * Return: NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *l = head;
	unsigned int n = 0;

	while (l && n < index)
	{
		l = l->next;
		n++;
	}
	if (l != NULL)
	{
		return (l);
	}
	else
	{
		return (NULL);
	}
}
