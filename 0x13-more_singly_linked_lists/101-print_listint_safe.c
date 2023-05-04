#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - A function that prints a listint_t linked list
 * @head: The pointer to the listint_t linked list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t l = 0;
	const listint_t *p = head;

	if (head == NULL)
	{
		exit(98);
	}
	while (p != NULL)
	{
		printf("[%p] %d\n", (void *)p, p->n);
		p = p->next;
		l++;
	}
	return (l);
}
