#include "main.h"

/**
 * _strncat - a function that concentrates 2 strings
 * @dest: character to be checked
 * @src: char to be checked
 * @n: int to be checked
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m = 0;
	int o = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	while (o < n && src[o] != '\0')
	{
		dest[m] = src[o];
		m++;
		o++;
	}
	dest[m] = '\0';
	return (dest);
}
