#include "main.h"

/**
 * _strcat - A function that concentrates 2 strings
 * @dest: character to pointer to be checked
 * @src: character to pointer to be checked
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int p = 0;
	int q = 0;

	while (dest[p] != '\0')
	{
		p++;
	}
	while (src[q] != '\0')
	{
		dest[p] = src[q];
		p++;
		q++;
	}
	dest[p] = '\0';
	return (dest);
}
