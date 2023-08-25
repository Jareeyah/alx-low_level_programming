#include "main.h"

/**
 * _puts - A function that prints a string to stdout
 * @s: The string to be checked
 */
void _puts(char *s)
{
	int p = 0;

	while (s[p] != 0)
	{
		_putchar(s[p]);
		p++;
	}
	_putchar('\n');
}
