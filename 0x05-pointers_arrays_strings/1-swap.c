#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: int to be swapedd with a
 * @b: int to be swaped with a
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}


