#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to string to be checked
 * @c: character to be checked
 * Return: pointer of char c in string s or NULL if char is not found
 */
char *_strchr(char *s, char c)
{
	int t;

	for (t = 0 ; s[t] >= '\0' ; t++)
	{
		if (s[t] == c)
		{
			return (&s[t]);
		}
	}
	return ('\0');
}
