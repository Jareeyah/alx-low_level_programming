#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: Thr character to print
 * Return: Always 1 success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
