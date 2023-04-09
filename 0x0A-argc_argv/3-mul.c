#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies 2 numbers
 * @argc: The number of arguments passed
 * @argv: The array of pointers
 * Return: 1 if the program does not receive 2 arguments and print Error
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;

	if (argc < 3 || argc > 3)
	{
		printf("Error");
		printf("\n");
		return (0);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	c = a * b;
	printf("%d", c);
	printf("\n");
	return (0);
}
