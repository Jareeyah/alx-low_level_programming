#include <stdio.h>

/**
 * main - Run a program of differnt size of compile computer
 *
 * Return: zero  success
 */
int main(void)
{
	printf("Size of a char = %d bytes \n", sizeof(char));
	printf("Size of a int = %d bytes \n", sizeof(int));
	printf("Size of a long int = %d bytes \n", sizeof(long int));
	printf("Size of a long long int = %d bytes \n", sizeof(long long int));
	printf("Size of a float = %d bytes \n", sizeof(float));
	return (0);
}
