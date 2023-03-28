#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: pointer to the input string
 *
 * Description: it prints half of a string and if the number of characters
 * is odd, the function printsthe last n character of the string.
 */
void puts_half(char *str)
{
	int r = 0;
	int s;
	int t;

	while (str[r] != '\0')
		r++;
	 s = (r % 2 == 0) ? r / 2 : (r / 2) + 1;

	for (t = s ; t < r ; t++)
		_putchar(str[t]);
	_putchar('\n');
}

