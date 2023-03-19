#include <stdio.h>

/**
 * main - printing combinations of double digits
 *
 * Return: always 0 success
 */
int main(void)
{
	int n = 0;
	int m;

while (n < 10)
{
	for (m = n + 1 ; m < 10 ; m++)
	{
		putchar(n + '0');
		putchar(m + '0');
	if (n != 8 || m != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	n++;
}
	putchar('\n');
	return (0);
}

