#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1
 * @n: the pointer to be checked
 * @index: Is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = *n ^ (1 << index);
	return (1);
}
