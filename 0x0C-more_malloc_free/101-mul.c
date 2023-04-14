#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two positive numbers
 * @argc: Number of arguments in the program
 * @argv: array of arguments in the program
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int a;
	int c;
	int v;

	if (argc != 3)
	{
		printf("Error");
		printf("\n");
		exit(98);
	}
	for (c = 1 ; c < argc ; c++)
	{
		for (v = 0 ; argv[c][v] != '\0' ; v++)
		{
			if (argv[c][v] < '0' || argv[c][v] > '9')
			{
				printf("Error");
				printf("\n");
				exit(98);
			}
		}
	}
	a = atoi(argv[1]) * atoi(argv[2]);
	printf("%d", a);
	printf("\n");
	return (0);
}
