#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int a;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = (int *) malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0 ; min <= max ; a++)
	{
		ptr[a] = min++;
	}
	return (ptr);
}
