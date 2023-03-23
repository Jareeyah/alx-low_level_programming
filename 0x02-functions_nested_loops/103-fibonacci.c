#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int a, b, c, sum;

	a = 1;
	b = 2;
	sum = 0;

	for (i = 1 ; i <= 33 ; i++)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		c = a + b;
		a = b;
		b = c;
	}

	printf("%lu\n", sum);

	return (0);
}

