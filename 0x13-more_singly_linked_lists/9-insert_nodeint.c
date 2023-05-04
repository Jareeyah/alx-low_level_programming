#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - A function that inserts a new node at a position
 * @head: The pointer to pointer to the linked list
 * @idx: It is the index of the list where the new node should be added
 * @n: int to add in the new node
 * Return: The address of the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *l = *head;
	listint_t *i;
	unsigned int t;

	i = malloc(sizeof(listint_t));

	if (i == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		return (NULL);
	}

	i->n = n;
	i->next = NULL;

	if (idx == 0)
	{
		i->next = *head;
		*head = i;
		return (i);
	}
	for (t = 0 ; l && t < idx ; t++)
	{
		if (t == idx - 1)
		{
			i->next = l->next;
			l->next = i;
			return (i);
		}
	else
	{
		l = l->next;
	}
	}
	return (NULL);
}
