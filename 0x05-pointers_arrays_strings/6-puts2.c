#include "main.h"

/**
 * puts2 - a function that prints everyother character of a string
 * @str: string to be checked
 */
void puts2(char *str)
{
	int r = 0;
	int s;

	while (str[r] != '\0')
		r++;
	for (s = 0 ; s < r ; s += 2)
		_putchar(str[s]);
	_putchar('\n');
}


