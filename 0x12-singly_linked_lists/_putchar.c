#include "lists.h"
#include <unistd.h>

/**
 * _putchar - A function that writes character c to stdout
 * @c: character to be printed
 * Return: On error -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
