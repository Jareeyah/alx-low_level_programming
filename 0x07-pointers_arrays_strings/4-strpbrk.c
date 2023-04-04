#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of byte
 * @s: char to string to be checked
 * @accept: char to string to be checked
 * Return: pointer to byte in s that matches the one in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int b;
	int p;

	for (b = 0 ; s[b] ; b++)
	{
		for (p = 0 ; accept[p] ; p++)
		{
			if (s[b] == accept[p])
			{
				return (&s[b]);
			}
		}
	}
	return ('\0');
}

