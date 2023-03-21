#include "main.h"

/**
 * print_alphabet - a function that prints lowecase alphaets
 *
 * Return: always 0 success
 */

void print_alphabet(void)

{
	char letter = 'a';

	for (letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
		return (0);
}
