#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character i to stdout
 * @i: character to print
 *
 * Return: Always 1
 * On error -1 is returned, and errno is set approximately
 */
int _putchar(char i)
{
	return (write(1, &i, 1));
}
