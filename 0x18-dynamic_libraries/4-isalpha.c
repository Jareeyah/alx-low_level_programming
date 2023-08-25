#include "main.h"

/**
 * _isalpha - function that checks alphabetic characters
 * @c: is the char to be checked
 * Return: 1 if char is a letter upper or lowecase otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
