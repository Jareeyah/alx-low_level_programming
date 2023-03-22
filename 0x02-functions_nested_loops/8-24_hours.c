#include "main.h"

/**
 * jack_bauer - print every minute of day of Jack Bauer
 * starting from 23:59 to 00:00
 */
void jack_bauer(void)
{
	int k = 0;
	int l = 0;

	while (k < 24)
	{
		while (l < 60)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(':');
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar('\n');
			l++;
		}
		k++;
	}
}
