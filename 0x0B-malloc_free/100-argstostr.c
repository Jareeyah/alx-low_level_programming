#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concentrates all arguments of your program
 * @ac: Number of arguments passed
 * @av: arrays of pointers
 * Return: A poinnter to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int a;
	int r;
	int g = 0;
	int s = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0 ; a < ac ; a++)
	{
		for (r = 0 ; av[a][r] ; r++)
			s++;
	}
	s = s + ac;

	ptr = (char *) malloc((s + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0 ; a < ac ; a++)
	{
		for (r = 0 ; av[a][r] ; r++)
		{
			ptr[g] = av[a][r];
			g++;
		}
		ptr[g] = '\0';
			(ptr[g++]) = '\n';
	}
	return (ptr);
}
