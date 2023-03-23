#include <stdio.h>

/**
 * main - print all first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int fib[50];
	int n;

	fib[0] = 1;
	fib[1] = 2;

	for (n = 0 ; n < 50 ; n++)
	{
		fib[n] = fib[n - 1] + fib[n - 2];

	for (n = 0 ; n < 49 ; n++)
	printf("%d ", fib[n]);
		printf("%d\n", fib[n]);
	}
	return (0);
}
