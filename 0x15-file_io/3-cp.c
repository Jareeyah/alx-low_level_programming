#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * make_buffer - A function that reads 1024 bytes at a time
 * @c: The file we are storing the buffer
 * Return: The pointer to the buffer
 */
char *make_buffer(char *c)
{
	char *m;

	m = malloc(sizeof(char) * 1024);
	if (m == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", c);
		exit(99);
	}
	return (m);
}
/**
 * end_file - A function that ends a file
 * @f: The file to be ended
 */
void end_file(int f)
{
	int e;

	e = close(f);
	if (e == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f %d\n", f);
		exit(100);
	}
}
/**
 * main - A program the copies the content of a file to another file
 * @argc: The number of arguments count in the program
 * @argv: The array of pointers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, a, c, v;
	char *s;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	s = make_buffer(argv[2]);
	i = open(argv[1], O_RDONLY);
	c = read(i, s, 1024);
	a = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (i == -1 || c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(s);
			exit(98);
		}
		v = write(a, s, v);
		if (a == -1 || v == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(s);
			exit(99);
		}

		c = read(i, s, 1024);
		a = open(argv[2], O_WRONLY | O_APPEND);
	}

	while (c > 0);
	free(s);
	end_file(i);
	end_file(a);

	return (0);
}
