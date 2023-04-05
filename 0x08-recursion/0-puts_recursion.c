#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	int r = 0;

	if (s[r])
	{
		_putchar(s[r]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
