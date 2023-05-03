#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - A function that returns the sum of all the data(n)
 * @head: The pointer to the listint_t linked list
 * Return: The sum of all the data(n) of listint_t linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *l = head;
	int s = 0;

	while (l != NULL)
	{
		s = s + l->n;
		l = l->next;
	}
	return (s);
}
