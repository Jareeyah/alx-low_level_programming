#include "main.h"

/**
 * _atoi - function that converts string to integer
 * @s: string to pointer to be checked
 * Return: int value of the converted string
 */
int _atoi(char *s)
{
	int r = 1;
	int p = 0;

	do {
		if (*s == '-')
			r *= -1;
		else if (*s >= '0' && *s <= '9')
			p = (p * 10) + (*s - '0');
		else if (p > 0)
			break;
		s++;
	} while (*s != '\0');
	return (r * p);
}


