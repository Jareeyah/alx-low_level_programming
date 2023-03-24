#include "main.h"

/**
 * print_diagonal
 * @n: int to be checked
 */
void print_diagonal(int n)
{
	int d;
	int g;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0 ; d < n ; d++)
		{
			for (g = 0 ; g < n ; g++)
			{
				if (g == d)
					_putchar('\\');
				else if (g < d)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
