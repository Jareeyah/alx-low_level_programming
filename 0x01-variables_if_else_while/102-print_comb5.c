#include <stdio.h>

/**
 * main - printing two-two digit numbers
 *
 * Return: always 0 success
 */
int main(void)
{
	int m;
	int n;

	for (m = 0 ; m < 100 ; m++)
		for (n = 0 ; n < 100 ; n++)
	{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
		if (m != 99 || n != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}



