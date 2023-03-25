#include <stdio.h>

/**
 * main - A program that finds and prints largest num of 612852475143
 * Return: Always 0 success
 */
int main(void)
{
	long int p;
	long int f;
	long int n;

	p = 612852475143;
	f = -1;

	while (p % 2 == 0)
	{
		f = 2;
		p /= 2;
	}
	for (n = 3 ; n <= p ; n = n + 2)
	{
		while (p % n == 0)
		{
			f = n;
			p = p / n;
		}
	}
	if (p > 2)
		f = p;

	printf("%ld\n", f);
	return (0);
}


