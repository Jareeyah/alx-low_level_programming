#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: char to string to be checked
 * @needle : char to string to be checked
 * Return: pointer at beginning of located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0' ; haystack++)
	{
		char *s = haystack;
		char *t = needle;

		while (*s == *t && *t != '\0')
		{
			s++;
			t++;
		}
		if (*t == '\0')
			return (haystack);
	}
	return ('\0');
}
