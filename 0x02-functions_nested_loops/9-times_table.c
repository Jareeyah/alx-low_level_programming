#include "main.h"

/**
 * times_table - function that prints 9 times table
 */
void times_table(void)
{
	int k;
	int l;
	int m;

	for (k = 0 ; k < 10 ; k++)
	{
		for (l = 0 ; l < 10 ; l++)
		{
			m = k * l;
			if (l == 0)
			{
				_putchar(m + '0');
			}
			if (m < 10 && l != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

