#include <stdio.h>

/**
 * main - combinations of three digits
 *
 * Return: always 0 success
 */
int main(void)
{
	int m;
	int n;
	int o;
	int count = 0;

for (m = 0 ; m < 10 ; m++)
{
	for (n = m + 1 ; n < 10 ; n++)
	{
		for (o = n + 1 ; o < 10 ; o++)
		{
			putchar(m + '0');
			putchar(n + '0');
			putchar(o + '0');
			count++;
			if (count < 120)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
}

putchar('\n');
return (0);
}

