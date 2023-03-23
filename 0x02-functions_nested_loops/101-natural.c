#include <stdio.h>

/**
 * main - print all natural numbers below 10
 *
 * Return: Always 0
 */
int main(void)
{
	int m, sum = 0;

	for (m = 0 ; m  < 1024 ;  m++)
	{
		if (m % 3 == 0 || m % 5 == 0)
			sum += m;
	}
	printf("%d\n", sum);
	return (0);
}

