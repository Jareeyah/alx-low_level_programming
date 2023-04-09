#include <stdio.h>

/**
 * main - A program that prints its name followed by a new line
 * @argc: The number of arguments passed
 * @argv: The Arrays of pointers
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
		printf("%s", *argv);
		printf("\n");
	return (0);
}
