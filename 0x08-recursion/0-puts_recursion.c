#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
		_putchar(s[r]);
		r++;
	}
	_putchar('\n');
}
