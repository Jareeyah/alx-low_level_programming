#include "main.h"

/**
 * leet - a function that encodes a string to 1337
 * letters 'a' and 'A' to be replaced with 4
 * letters 'e' and 'E' to be replaced with 3
 * letters 'o' and 'O' to be replaced with 0
 * letters 't' and 'T' to be replaced with 7
 * letters 'l' and 'L' to be replaced with 1
 * @l: string to be checked
 * Return: string l
 */
char *leet(char *l)
{
	int m;
	int n;
	char s1[] = "AaeEoOtTlL";
	char s2[] = "4433007711";

	m = 0;
	while (l[m] != '\0')
	{
		n = 0;
		while (n < 10)
		{
			if (s1[n] == l[m])
			{
				l[m] = s2[n];
			}
			n++;
		}
		m++;
	}
	return (l);
}
