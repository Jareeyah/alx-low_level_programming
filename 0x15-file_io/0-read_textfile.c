#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and prints it to the POSIX
 * @filename: The pointer to character
 * @letters: Is the number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r;
	ssize_t tf;
	ssize_t e;
	char *s;

	if (filename == NULL)
	{
		return (0);
	}
	tf = open(filename, O_RDONLY);
	if (tf == -1)
	{
		return (0);
	}
	s = malloc(letters * sizeof(char));
	r = read(tf, s, letters);
	e = write(STDOUT_FILENO, s, r);

	free(s);
	close(tf);
	return (e);
}
