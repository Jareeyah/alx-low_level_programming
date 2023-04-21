#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers followed by a new line
 * @separator: Is the string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int p;

	va_start(v, n);

	for (p = 0; p < n ; p++)
	{
		printf("%d", va_arg(v, int));

		if (p != (n - 1))
		{
		if (separator != NULL)
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(v);
}
