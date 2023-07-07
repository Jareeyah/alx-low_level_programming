#include "main.h"

/**
 * flip_bits - A function that returns number of bits you will need to flip
 * to get from one number to another
 * @n: The int to be flipped
 * @m: The int to be flipped
 * Return: Number of bits you will need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned long int f;
	int p;
	int b = 0;

	for (p = 63; p >= 0; p--)
	{
		f = x >> p;
		if (f & 1)
		b++;
	}
	return (b);
}
