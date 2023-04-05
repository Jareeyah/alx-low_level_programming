#include "main.h"

/**
 * _print_rev_recursion - A function that prints in reverse
 * @s: string to be reversed
 */
void _print_rev_recursion(char *s)
{
	int r = 0;

	if (s[r])
	{
		_print_rev_recursion(s + 1);
		_putchar(s[r]);
	}
}
