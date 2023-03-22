#include "main.h"

/**
 * print_alphabet_x10 - fuction that prints alphabets 10 times
 *
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char letter;

	while (n < 10)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
		n++;
	}

}

