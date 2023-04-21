#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns sum of all its parameters
 * @n: int to be checked
 * Return: The sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list v;
	int s = 0;
	unsigned int f;

	if (n == 0)
	{
		return (0);
	}

	va_start(v, n);

	for (f = 0 ; f < n ; f++)
		s = s + va_arg(v, int);
	va_end(v);
	return (s);
}
