#include "main.h"

/**
 * string_recursion - function that return length of a string with recursion
 * @s: string to be checked
 * Return: 1 if string is palindrome, otherwise 0
 */
int string_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + string_recursion(s + 1));
}
/**
 * check_palindrome - function that checks a palindrome recursively
 * @s: string to be checked
 * @n: int to check palindrome from
 * @d: int to act as palindrome
 * Return: 1 if string is palindrome, otherwise 0
 */
int check_palindrome(char *s, int n, int d)
{
	if (n >= d)
	{
		return (1);
	}
	else if (*(s + n) != *(s + d - 1))
	{
		return (0);
	}
	return (check_palindrome(s, n + 1, d - 1));
}
/**
 * is_palindrome - function that returns 1 if a string is palindrome
 * @s: string to be checked
 * Return: 1 if a string is palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	else
		return (check_palindrome(s, 0, string_recursion(s)));
}
