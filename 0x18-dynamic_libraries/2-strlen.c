#include "main.h"

/**
 * _strlen - a function that returns a length of a string
 * @s: pointer to string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\n' && *s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
