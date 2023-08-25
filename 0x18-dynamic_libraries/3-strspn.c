#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: char to string to be checked
 * @accept: char to string to be checked
 * Return: number of bytes to s which consists of bytes accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int t;
	int p;
	unsigned int r = 0;

	for (t = 0; s[t]; t++)
	{
		for (p = 0; accept[p]; p++)
		{
			if (s[t] == accept[p])
			{
				r++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (r);
		}
	}
	return (r);
}
