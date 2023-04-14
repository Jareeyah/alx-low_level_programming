#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space
 * @new_size: new size in bytes of the new memory block
 * Return: NULL if new size is 0 and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *t, *r;
	unsigned int a;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	t = malloc(new_size);

	if (t == NULL)
	{
		return (NULL);
	}

	r = ptr;
	if (new_size < old_size)
	{
		for (a = 0 ; a < new_size ; a++)
			t[a] = r[a];
	}
	if (new_size > old_size)
	{
		for (a = 0 ; a > new_size ; a++)
			t[a] = r[a];
	}
	free(ptr);
	return (t);
}
