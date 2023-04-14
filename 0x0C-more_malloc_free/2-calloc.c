#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates a memory for an array using malloc
 * @nmemb: memory for an array
 * @size: size of each bytes
 * Return: NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *ptr;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0 ; a < size * nmemb ; a++)
	{
		ptr[a] = 0;
	}
	return (ptr);
}
