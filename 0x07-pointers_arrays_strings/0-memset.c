#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to be checked
 * @b: constant byte of pointer s
 * @n: bytes of memory area
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m = 0;
	unsigned int p;

	while (s[m] != '\0')
		m++;
	{
		for (p = 0 ; p < n ; p++)
		{
			s[p] = b;
		}
	}
	return (s);
}

