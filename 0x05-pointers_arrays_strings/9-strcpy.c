#include "main.h"

/**
 * _strcpy - function that copies string
 * @dest: char to pointer to be checked
 * @src: char to pointer to be checked
 * Return: to the pointer dest
 */
char *_strcpy(char *dest, char *src)
{

	while (src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
		dest[p] = '\0';
	return (dest);
}
