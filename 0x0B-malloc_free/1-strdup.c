#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A fuction that that returns the copy of the parameter string
 * @str: char of the string parameter
 * Return: NULL if insufffient memory was available
 */
char *_strdup(char *str)
{
	int s = 0;
	int t = 0;
	char *d;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[s] != '\0')
	{
		s++;
	}

	d = (char *) malloc((s + 1) * sizeof(char));

	if (d == NULL)
	{
		return (NULL);
	}

		for (t = 0 ; str[t] ; t++)
		{
			d[t] = str[t];
		}

	return (d);
}
