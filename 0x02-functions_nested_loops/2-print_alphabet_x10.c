#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - fuction that prints alphabets 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
			_putchar(letter);
		_putchar('\n');
	}
	return (0);
}

