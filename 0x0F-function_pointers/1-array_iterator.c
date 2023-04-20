#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array to be checked
 * @size: the size of the array
 * @action: pointer of function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int a;

	if (!array)
	{
		return;
	}
	if (!action)
	{
		return;
	}
	for (a = 0 ; a < size ; a++)
	{
		action(array[a]);
	}
}
