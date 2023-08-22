#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node of a
 * dlistint_t linked list
 * @head: The head of the list
 * @index: Is the index of the node, starting from 0
 * Return: NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int g = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (index == g)
		{
			return (head);
		}
		head = head->next;
		g++;
	}
	return (NULL);
}
