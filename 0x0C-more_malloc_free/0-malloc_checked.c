#include "main.h"

/**
 * malloc_checked - function that allocates memory to malloc
 * @b: unsigned int to be checked
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
