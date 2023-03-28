#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes char i to stdout
 * @i: The character to print
 *
 * Return: Always 1
 * On error -1 is returned, and errno is set appropriately
 */
int _putchar(char i)
{
	return (write(1, &i, 1));
}
