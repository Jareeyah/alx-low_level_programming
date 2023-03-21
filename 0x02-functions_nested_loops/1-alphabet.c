#include "main.h"

/**
 * print_alphabet - a function that prints lowecase alphaets
 *
 * Return: always 0 success
 */

void print_alphabet(void)

{
	char m = 'a';

	for (m < 'z')
		_putchar(m);
	m++;
		_putchar('\n');
		return (0);
}
