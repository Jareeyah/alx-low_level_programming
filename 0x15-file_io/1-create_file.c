#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: Is the name of the file to create
 * @text_content: Is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int c;
	int t;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";

	for (t = 0 ; text_content[t] != '\0' ; t++)
	c = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (c == -1)
	{
		return (-1);
	}
	write(c, text_content, t);

	return (1);
}
