#include "main.h"

/**
 * factorial - function that returns factorial of a given number
 * @n: int to return factorial
 * Return: -1 if n is lower than 0 to indicate an error
 */
int factorial(int n)
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
	{
		return (n * factorial(n - 1));
	}
}
