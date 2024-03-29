#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of all the data (n) of a
 * dlistint_t linked list
 * @head: The head of the list
 * Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			s = s + head->n;
			head = head->next;
		}
	}
	return (s);
}
