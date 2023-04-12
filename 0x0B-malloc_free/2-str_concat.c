#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concentrates 2 string
 * @s1: first string to be concentrated
 * @s2: second string to be concentrated
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int c = 0;
	int s = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[c] != '\0')
		c++;
	while (s2[s] != '\0')
		s++;

	ptr = (char *) malloc((c + s + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	c = 0;
	s = 0;
		while (s1[c] != '\0')
		{
			ptr[c] = s1[c];
			c++;
		}
		while (s2[s] != '\0')
		{
			ptr[c] = s2[s];
			c++;
			s++;
		}
		ptr[c] = '\0';
		return (ptr);
}
