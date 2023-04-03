#include "main.h"

/**
 * _memcpy - A function that copies memeory area
 * @dest: pointer to be copied to src
 * @src: pointer to be copied to dest
 * @n: int to be checked
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
		dest[m] = src[m];
		m++;
	}
	return (dest);
}
