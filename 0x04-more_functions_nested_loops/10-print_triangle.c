#include "main.h"

/**
 * print_triangle - function that prints a trinagle
 * @size: int to be checked
 */
void print_triangle(int size)
{
	int t;
	int r;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 1 ; t <= size ; t++)
		{
			for (r = t ; r < size ; r++)
			{
				_putchar(' ');
			}
			for (r = 1 ; r <= t ; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
