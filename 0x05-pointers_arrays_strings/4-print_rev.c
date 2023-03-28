#include "main.h"

/**
 * print_rev - a function that writes string in reverse
 * @s: string to be checked
 */
void print_rev(char *s)
{
	int l = 0;
	int t;

	while (s[l] != '\0')
		l++;

	for (t = l - 1 ; t >= 0 ; t--)
	{
		_putchar(s[t]);
	}
	_putchar('\n');
}
