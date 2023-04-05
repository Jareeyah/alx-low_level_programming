#include "main.h"

/**
 * _pow_recursion - function that returns x raised to power of y
 * @x: int to be raised to the power of y
 * @y: int to raise x
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
