#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @k: char to be checked
 * Return: value of the last digit
 */
int print_last_digit(int k)
{
	int l;

	if (k < 0)
	{
		k = -k;
	}
	l = k % 10;

	if (l < 0)
	{
		l = -l;
	}
		_putchar(l + '0');
	return (l);
}

