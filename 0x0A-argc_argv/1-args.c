#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints the number of arguments paseed into it
 * @argc: The number of arguments passed
 * @argv: array of pointers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
