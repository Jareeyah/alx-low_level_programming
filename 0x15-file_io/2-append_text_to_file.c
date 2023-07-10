#include "main.h"
#include <fcntl.h>

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: This is the name of the file
 * @text_content: This is a NULL terminated string to add to the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int c;
	int t = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[t] != '\0')
	{
		t++;
	}
	c = open(filename, O_APPEND | O_WRONLY);
	if (c == -1)
	{
		return (-1);
	}
	write(c, text_content, t);
	close(c);
	return (1);
}
