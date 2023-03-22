#include "main.h"

/**
 * jack_bauer - print every minute of day of Jack Bauer
 * starting from 23:59 to 00:00
 */
void jack_bauer(void)
{
	int k;
	int l;

	for (k = 0 ; k < 24 ; k++)
	{
		for (l = 0 ; l < 60 ; l++)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(':');
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar('\n');
		}
	}
}
