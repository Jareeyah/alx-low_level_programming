#include "main.h"
#include <stdlib.h>

/**
 * word_string - function to check  number of words in string
 * @str: string to be checked
 * Return: Number vof words in the string
 */
int word_string(char *str)
{
	int w, r, d = 0;

	for (w = 0 ; str[w] != '\0' ; w++)
	{
		if (str[w] == ' ')
			r = 0;
		else if (r == 0)
			r = 1;
		d++;
	}
	return (d);
}
/**
 * strtow - function that splits a string into words
 * @str: string to be checked
 * Return: NULL if function fails
 */
char **strtow(char *str)
{
	char **ptr, *l;
	int s, t, o, w, c, a = 0, r = 0;

	while (*(str + s))
		s++;
	t = word_string(str);
	if (t == 0)
	{
		return (NULL);
	}
	ptr = (char **) malloc((t + 1) * sizeof(char *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (o = 0 ; o <= s ; o++)
	{
		if (str[o] == ' ' || str[o] == '\0')
		{
			if (r)
			{
				w = o;
				l = (char *) malloc((r + 1) * sizeof(char));
				if (l == NULL)
				{
					return (NULL);
				}
				while (c < w)
				*l++ = str[c++];
				*l = '\0';
				ptr[a] = l - r;
				a++;
				r = 0;
			}
		}
		else if (r++ == 0)
			c = o;
	}
	ptr[a] = NULL;
	return (ptr);
}
