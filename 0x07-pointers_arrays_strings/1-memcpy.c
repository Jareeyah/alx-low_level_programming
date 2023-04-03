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
	unsigned int p = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	while (p < n && src[p] != '\0')
	{
		dest[m] = src[p];
		p++;
		m++;
	}
	dest[m] = '\0';
	return (dest);
}
