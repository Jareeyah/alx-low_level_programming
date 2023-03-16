#include <stdio.h>

/**
 * main - Run a program of differnt size of compile computer
 *
 * Return: zero  success
 */
int main(void)
{
	printf("Size of a char = %lu\n bytes", sizeof(char));
	printf("Size of a int = %lu\n bytes", sizeof(int));
	printf("Size of a double = %lu\n bytes", sizeof(double));
	printf("Size of a float = %lu\n bytes", sizeof(float));
	return (0);
}
