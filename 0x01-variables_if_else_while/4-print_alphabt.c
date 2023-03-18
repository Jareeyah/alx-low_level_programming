#include <stdio.h>

/**
 * main - printing lowercase alphabets except q and e
 *
 * Return: Always 0 success
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; ++c)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);
}
