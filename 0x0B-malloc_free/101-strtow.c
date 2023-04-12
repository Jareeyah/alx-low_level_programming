#include "main.h"
#include <stdlib.h>

/**
 * word_string - function to check  number of words in string
 * @str: string to be checked
 * Return: Number vof words in the string
 */
int word_string(char *str)
{
	int w = 0, r = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
			r = 0;
		else if (!r)
		{
			w++;
		r = 1;
		}
	str++;
	}
	return (w);
}
/**
 * strtow - function that splits a string into words
 * @str: string to be checked
 * Return: NULL if function fails
 */
char **strtow(char *str)
{
	char **ptr, *l;
	int s, t, o, n, c, a = 0, m = 0;

	while (*(str + s))
		s++;
	t = word_string(str);
	if (t == 0)
		return (NULL);
	ptr = (char **) malloc((t + 1) * sizeof(char *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (o = 0 ; o <= s ; o++)
	{
		if (str[o] == ' ' || str[o] == '\0')
		{
			if (m)
			{
				n = o;
				l = (char *) malloc((m + 1) * sizeof(char));
				if (l == NULL)
					return (NULL);
				while (c < n)
				*l++ = str[c++];
				*l = '\0';
				ptr[a] = l - m;
				a++;
				m = 0;
			}
		}
		else if (m++ == 0)
			c = o;
	}
	ptr[a] = NULL;
	return (ptr);
}
