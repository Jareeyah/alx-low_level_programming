#include <stdio.h>

/**
 * main - print lowercase alphabets except q and e
 *
 * Return: Always 1 success
 */
int main(void)
{
	char m = 'a';
while (m <= 'z')
	m++;
if (m != 'q' && m != 'e')
	putchar(m);
	putchar('\n');
	return (0);
}
