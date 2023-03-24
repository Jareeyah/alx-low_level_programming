#include "main.h"

/**
 * _isupper - A function that checks uppercase letters
 * @c: is int to be checked
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);
}

