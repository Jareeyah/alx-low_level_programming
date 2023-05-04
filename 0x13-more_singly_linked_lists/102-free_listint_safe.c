#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - A function that frees a listint_t list
 * @h: The pointer to pointer to the listint_t linked list
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	listint_t *f;
	int s;

	if (h == NULL)
	{
		return (0);
	}
	if (*h == NULL)
	{
		return (0);
	}

	while (*h != NULL)
	{
		s = *h - (*h)->next;
		if (s > 0)
		{
			f = (*h)->next;
			free(*h);
			*h = f;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
