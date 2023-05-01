#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - A function that adds a new node at the end of list
 * @head: The pointer to pointer to list
 * @str: The string to be added at the end
 * Return: The address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a;
	list_t *n = *head;
	unsigned int e = 0;

	while (str[e] != '\0')
		e++;

	a = malloc(sizeof(list_t));

	if (a == NULL)
	{
		return (NULL);
	}

	a->str = strdup(str);
	a->len = e;
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
	}
	else
	{
		while (n->next)
		{
			n = n->next;
		}
		n->next = a;
	}
	return (a);
}
