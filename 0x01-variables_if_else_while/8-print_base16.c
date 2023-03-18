#include <stdio.h>

/**
 * main - printing hexadecimal numbers
 *
 * Return: always 0 success
 */
int main(void)
{
	int n = 0;
	char p = 'a';

while (n <= 10)
{
	putchar(n);
	n++;
}

while (p <= 'f')
{
	putchar(p);
	p++;
}
	putchar('\n');
	return (0);
}

