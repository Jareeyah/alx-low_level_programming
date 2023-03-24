#include "main.h"

/**
 * print_square - function that prints a square
 * @size: int to be checked
 */
void print_square(int size)
{
	int s;
	int t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 0 ; s < size ; s++)
		{

			for (t = 0 ; t < size ; t++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}


