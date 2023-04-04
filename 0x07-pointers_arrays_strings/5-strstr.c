#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: char to string to be checked
 * @needle : char to string to be checked
 * Return: pointer at beginning of located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int s;
	int t;

	for (s = 0 ; haystack[s] != '\0' ; s++)
	{
		for (t = 0 ; needle[t] != '\0' ; t++)
		{
			if (haystack[s + t] != needle[t])
				break;
			if (needle[t + 1] == '\0')
				return (&haystack[s]);
		}
	}
	return (&haystack[s]);
}
