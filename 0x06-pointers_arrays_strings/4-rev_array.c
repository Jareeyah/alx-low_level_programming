#include "main.h"

/**
 * reverse_array - functin that reverse content of array
 * @a: array to be checked
 * @n: int to be checked
 */
void reverse_array(int *a, int n)
{
	int b;
	int r;

	for (b = 0 ; b < n ; b++)
	{
		n--;
		r = a[b];
		a[b] = a[n];
		a[n] = r;
	}
}
