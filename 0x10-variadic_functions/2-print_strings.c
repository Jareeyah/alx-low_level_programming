#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings followed by a new line
 * @separator: The string to be printed between strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int p;
	char *ptr;

	va_start(v, n);

	for (p = 0 ; p < n ; p++)
	{
		ptr = va_arg(v, char *);

		if (ptr == NULL)
			printf("(nil)");
		printf("%s", ptr);

		if (p != (n - 1))
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(v);
}
