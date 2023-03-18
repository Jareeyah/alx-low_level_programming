#include <stdio.h>

/**
 * main - printing hexadecimal numbers
 *
 * Return: always 0 success
 */
int main(void)
{
	int n;
	char p;

	for (n = 0 ; n <= 10 ; n++)
		putchar(n);
	for (p = 'a' ; p <= 'f' ; p++)
		putchar(p);
	putchar('\n');
	return (0);
}
