#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - A function that adds node at the beginning of a list
 * @head: The pointer to pointer to the linked listin_t list
 * @n: The int to add to the node in the list
 * Return: The address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *l;

	l = malloc(sizeof(listint_t));

	if (l == NULL)
	{
		return (NULL);
	}

	l->n = n;
	l->next = *head;
	*head = l;

	return (l);
}
