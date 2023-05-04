#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - A function that finds the loop in a linked list
 * @head: The pointer to the listint_t linked list
 * Return: The address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *l = head;
	listint_t *f = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (l != NULL && f != NULL && f->next->next != NULL)
	{
		f = f->next->next;
		l = l->next;
		if (f == l)
		{
			l = head;
			while (l != f)
			{
				l = l->next;
				f = f->next;
			}
			return (f);
		}
	}
	return (NULL);
}
