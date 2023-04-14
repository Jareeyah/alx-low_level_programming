#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concentrates 2 strings
 * @s1: first string to be concentrated
 * @s2: second string to be concentrated
 * @n: int to be checked
 * Return: NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s = 0;
	unsigned int t = 0;
	unsigned int a = 0;
	unsigned int c = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[s] != '\0')
		s++;
	while (s2[t] != '\0')
		t++;
	if (n >= t)
		n = t;

	ptr = (char *) malloc((s + n + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (a < s)
	{
		ptr[a] = s1[a];
		a++;
	}
	while (c < n)
	{
		ptr[a] = s2[c];
		a++;
		c++;
	}
	ptr[a] = '\0';
	return (ptr);
}
