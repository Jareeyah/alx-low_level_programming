#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character m to stdout
 * @m: The character to print
 *
 * Return: Always 1
 * On error -1 is returned, and errno is set appropriately
 */
int _putchar(char m)
{
	return (write(1, &m, 1));
}                    
