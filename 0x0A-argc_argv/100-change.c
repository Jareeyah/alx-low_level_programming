#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - A program that prints minimum number of coins
 * @argc: The number of arguments passed in a program
 * @argv: The array of pointers
 * Return: 1 if if number of arguments passed is not exactly 1
 */
int main(int argc, char *argv[])
{
	int a;
	int c;
	int v = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("0");
		printf("\n");
		return (0);
	}
	for (c = 0; c < 5 && a >= 0; c++)
	{
		while (a >= cents[c])
		{
			v++;
			a = a - cents[c];
		}
	}
	printf("%d", v);
	printf("\n");
	return (0);
}
