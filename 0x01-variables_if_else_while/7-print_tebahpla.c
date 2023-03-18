#include <stdio.h>

/**
 * main - print alphabets in reverse
 *
 * Return: always 0 success
 */
int main(void)
{
	char k;

	for (k = 'z' ; k <= 'a' ; --k)
{
	putchar(k);
}
	putchar('\n');
	return (0);
}
