#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at an index
 * @n: The int to be checked
 * @index: This is the index, starting from 0 of the bit you want to get
 * Return: The value of the bit  at index or 1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
