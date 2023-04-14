#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char m to sdout
 * @m: character to be checked
 * Return: Always 1 success
 */
int _putchar(char m)
{
	return (write(1, &m, 1));
}
