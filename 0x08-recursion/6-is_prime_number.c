#include "main.h"

/**
 * is_prime_number - function that returns 1 if inpute is prime number
 * @n: int to return prime number from
 * Return: 1 if input integer is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (real_number(n, n - 1));
}
/**
 * real_number - function to assist is_prime_number
 * @n: int to return prime number from
 * @p: int to act as prime number
 * Return: 1 if input integer is a prime number, otherwise 0
 */
int real_number(int n, int p)
{
	if (p == 1)
	{
		return (1);
	}
	else if (n % p == 0 && p > 0)
	{
		return (0);
	}
	else
		return (real_number(n, p - 1));
}
