#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int g = 1;
	char *c = (char *)&g;

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (*c);
}
