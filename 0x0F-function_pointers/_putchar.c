#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character i to stdout
 * @i: char to be checked
 * Return: On error -1 is returned, errno is set appropriately
 */
int _putchar(char i)
{
	return (write(1, &i, 1));
}
