#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that print elements of an array of integers
 * @a: string to pointer to be checked
 * @n: int to be checked
 */
void print_array(int *a, int n)
{
	int r;

	for (r = 0 ; r < n ; r++)
	{
		printf("%d", a[r]);
	if (r < n - 1)
	{
		printf(", ");
	}
	}
	printf("\n");
}
