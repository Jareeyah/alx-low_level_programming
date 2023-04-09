#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds 2 positive numbers
 * @argc: The numbers of arguments passec in a program
 * @argv: The pointer of arrays
 * Return: 1 if one of the number contains symbols that are not digits
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int c;
	int v;

	if (argc == 1)
	{
		printf("%d", a);
		printf("\n");
		return (0);
	}
	for (c = 1; c < argc; c++)
	{
		char *s = argv[c];

		for (v = 0; s[v] != '\0'; v++)
		{
			if (!isdigit(s[v]))
			{
				printf("Error");
				printf("\n");
				return (1);
			}
		}
			a = a + atoi(s);
	}
		printf("%d", a);
		printf("\n");
		return (0);
}

