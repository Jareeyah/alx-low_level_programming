#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: length of string to be printed
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (s[l])
	{
		l++;
		l = l + _strlen_recursion(s + 1);
	}
	return (l);
}
