#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars
 * @size: The size of the array
 * @c: character to initialize
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *ptr;

	ptr = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0 ; a < size ; a++)
	{
		ptr[a] = c;
	}
	return (ptr);
}
