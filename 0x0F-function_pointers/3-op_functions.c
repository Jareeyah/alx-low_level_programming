#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - function that returns sum of a and b
 * @a: int to be added to b
 * @b: int to be added to a
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that returns difference betwwen a and b
 * @a: int to be subtracted to b
 * @b: int to be subracted from a
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that returns the product of a and b
 * @a: int to be multiplied with b
 * @b: int to be multiplied with a
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that returns the result of the division of a by b
 * @a: int to be divided by b
 * @b: int to be divided by a
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function that returns the remainder of the division of a by b
 * @a: int to return remainder from
 * @b: int to return reaminder from
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
