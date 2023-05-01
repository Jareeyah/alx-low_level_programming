#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - A function that adds a new node at the beginning of a list
 * @head: A pointer to pointer to the list
 * @str: The string to a new node in the list
 * Return: The address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *a;
	unsigned int n = 0;

	while (str[n] != '\0')
		n++;

	a = malloc(sizeof(list_t));

	if (a == NULL)
	{
		return (NULL);
	}

	a->str = strdup(str);
	a->len = n;
	a->next = *head;
	*head = a;

	return (a);
}
