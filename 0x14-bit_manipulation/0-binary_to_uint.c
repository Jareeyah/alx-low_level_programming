#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to unsigned int
 * @b: Is pointing to a string of 0 and 1 characters
 * Return: The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; *b; b++)
	{
		if (*b < '0' || *b > '1')
		{
			return (0);
		}
		i = 2 * i + (*b - '0');
	}
	return (i);
}
