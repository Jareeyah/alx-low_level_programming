#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes character i to stdout
 * @i: character to be printed
 * Return: On error, -1 is returned and errno is set appropriately
 */
int _putchar(char i)
{
	return (write(1, &i, 1));
}
