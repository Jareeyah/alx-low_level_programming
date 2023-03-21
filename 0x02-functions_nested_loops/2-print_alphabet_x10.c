#include "main.h"

/**
 * main - fuction that prints alphabets 10 times
 *
 * Return: 0
 */
int main(void)
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

