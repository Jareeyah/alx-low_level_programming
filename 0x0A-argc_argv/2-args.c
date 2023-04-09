#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints all arguments it receives
 * @argc: The number of arguments passed
 * @argv: The qarray of pointers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%s", argv[a]);
	printf("\n");
	}
	return (0);
}
