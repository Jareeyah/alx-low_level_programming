#include <stdio.h>

/**
 * main - printing lowercase alphabets except q and e
 *
 * Return: Always 1 success
 */
int main(void)
{
	char m;

	m = 'a';
while (m <= 'z')
	if (m != 'q' && m != 'e')
		putchar(m);
		m++;
		putchar('\n');
	return (0);
}
