#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: The list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list v;
	int p = 0;
	char *ptr, *trp = "";

	va_start(v, format);

	if (format)
	{
		while (format[p])
		{
			switch (format[p])
			{
				case 'c':
					printf("%s%c", trp, va_arg(v, int));
					break;
				case 'i':
					printf("%s%d", trp, va_arg(v, int));
					break;
				case 'f':
					printf("%s%f", trp, va_arg(v, double));
					break;
				case 's':
					ptr = va_arg(v, char *);

					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", trp, ptr);
					break;
				default:
					p++;
					continue;
			}
			trp = ", ";
			p++;
		}
	}
	printf("\n");
	va_end(v);
}
