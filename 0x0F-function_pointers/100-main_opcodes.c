#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that prints the opcodes of its own main function
 * @argc: Number of arguments in the program
 * @argv: Array of pointers
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int a;
	int c;
	char *ptr;

	if (argc != 2)
	{
		printf("Error");
		printf("\n");
		exit(1);
	}
	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error");
		printf("\n");
		exit(2);
	}

	ptr = (char *)main;

	for (c = 0 ; c < a ; c++)
	{
		if (c == a - 1)
		{
			printf("%02hhx", ptr[c]);
			printf("\n");
			break;
		}
		printf("%02hhx ", ptr[c]);
	}
	return (0);
}
