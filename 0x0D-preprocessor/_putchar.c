#include <unistd.h>

/**
 * _putchar - writes char p to stdout
 * @p: character to be checked
 * Return: On error -1 is returned, errno is set appropriately
 */
int _putchar(char p)
{
	return (write(1, &p, 1));
}
