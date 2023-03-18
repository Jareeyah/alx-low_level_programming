#include <stdio.h>

/**
 * main - print alphabets in reverse
 *
 * Return: always 0 success
 */
int main(void)
{
	char k = 'z';

	while (k <= 'a')
{
	putchar(k);
	k++;
}
	putchar('\n');
	return (0);
}
