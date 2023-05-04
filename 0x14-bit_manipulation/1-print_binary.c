#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a number
 * @n: int to be printed in binary number
 */
void print_binary(unsigned long int n)
{
	unsigned long int p;
	int b;
	int r = 0;

	for (b = 63 ; b >= 0 ; b--)
	{
		p = n >> b;

		if (p & 1)
		{
			_putchar('1');
			r++;
		}
		else if (r != 0)
		{
			_putchar('0');
		}
	}
		if (r == 0)
		{
			_putchar('0');
		}
}

