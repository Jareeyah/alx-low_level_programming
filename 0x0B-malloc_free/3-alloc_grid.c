#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - fuction that returns a pointer to a 2 dimensional array
 * @width: int ot be checked
 * @height: int to be checked
 * Return: NULL if width or height is 0
 */
int **alloc_grid(int width, int height)
{
	int a;
	int g;
	int i = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = (int **) malloc(height * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0 ; a < height ; a++)
	{
		ptr[a] = (int *) malloc(width * sizeof(int));
		if (ptr[a] == NULL)
		{
			for (g = 0 ; a < i ; g++)
				free(ptr[g]);
			free(ptr);
			return (NULL);
		}
		i++;
	}
	for (a = 0 ; a < height ; a++)
	{
		for (g = 0 ; g < width ; g++)
			ptr[a][g] = 0;
	}
	return (ptr);
}
