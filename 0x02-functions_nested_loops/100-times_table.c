#include "main.h"

/**
 * print_times_table - print the n timetable
 * @n: mumber of times table
 */
void print_times_table(int n)
{
	int k;
	int l;
	int m;

	if (n >= 0 && n <= 15)
	{
		for (k = 0 ; k <= n ; k++)
		{
			for (l = 0 ; l <= n ; l++)
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
					_putchar(' ');
					_putchar(m + '0');
				}
				else if (m >= 10 && m < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				}
				else if (m >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');

					_putchar((m % 10) + '0');
				}
			}
			_putchar('\n');

		}
	}
}	




