#include "variadic_functions.c"
#include <unistd.h>

/**
 * _putchar - writes character i to stdout
 * @i: character to print
 * Return: On error -1 is returned, and errno is set appropriately
 */
int _putchar(char i)
{
	return (write(1, &i, 1));
}
