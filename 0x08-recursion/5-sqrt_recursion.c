#include "main.h"

/**
 * _sqrt_recursion - function that returns natural square root of a num.
 * @n: int to return natural sqaure from
 * Return: -1 if n does not have natural square root
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (natural_sqrt_number(n, 0));
}
/**
 * natural_sqrt_number - recursion to assist _sqrt_recursion
 * @n: int to return natural square root from
 * @s: the natural square root
 * Return: the natural square root
 */
int natural_sqrt_number(int n, int s)
{
	if (s * s > n)
	{
		return (-1);
	}
	else if (s * s == n)
	{
		return (s);
	}
	else
		return (natural_sqrt_number(n, s + 1));
}
