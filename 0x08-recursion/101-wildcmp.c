#include "main.h"

/**
 * wildcmp - function that compares 2 string and return 1 if it is identical
 * @s1: string to be compared to s2
 * @s2: string to be compared to s1
 * Return: 1 if strings are identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	int w = 0;

	if (s1[w] == '\0')
	{
		if (s2[w] != '\0' && s2[w] == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (s2[w] == '\0');
	}
	if (s2[w] == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (s1[w] == s2[w])
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
		return (0);
}
