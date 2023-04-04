#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints sum of 2 diagonals
 * @a: int to pointer to be checked
 * @size: int to be checked
 */
void print_diagsums(int *a, int size)
{
	int p = 0;
	int d = 0;
	int s;

	for (s = 0 ; s < size ; s++)
	{
		p = p + a[s * size + s];
	}
	for (s = size - 1 ; s >= 0 ; s--)
	{
		d = d + a[s * size + (size - s - 1)];
	}
	printf("%d, %d\n", p, d);
}
