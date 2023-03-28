#include "main.h"

/**
 * _puts - fuction that prints a string to stdout
 * @str: string to be checked
 */
void _puts(char *str)
{
	int l = 0;

	while (str[l] != 0)
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}

