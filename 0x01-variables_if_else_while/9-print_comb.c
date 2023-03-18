#include <stdio.h>

/**
 * main - printing possible combination of digits
 *
 * Return: always 1 success
 */
int main(void)
{
	int n;

for (n = 0 ; n < 10 ; n++)
{
	putchar(n + '0');
	putchar(',');
	putchar(' ');
}
	putchar('\n');
	return (0);
}
