#include "3-calc.h"
#include <stdio.h>

/**
 * main - A progtam that performs simple operations
 * @argc: Number of arguments entered
 * @argv: Array of pointers
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int c;
	int v;
	char *g;

	if (argc != 4)
	{
		printf("Error");
		printf("\n");
		exit(98);
	}

	c = atoi(argv[1]);
	v = atoi(argv[3]);
	g = argv[2];

	if (get_op_func(g) == NULL || g[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*g == '/' && v == 0) || (*g == '%' && v == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d", get_op_func(g)(c, v));
	printf("\n");
	return (0);
}
