#include "main.h"
#include <stdlib.h>

/**
 * create_file - A function that creates a file
 * @filename: Is the name of the file to create
 * @text_content: Is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int c = -1;
	int f;
	int t = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		c = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
		if (c == -1)
		{
			return (-1);
		}
		while (text_content[t])
		{
			t++;
		}
		f = write(c, text_content, t);
		if (f == -1)
		{
			close(c);
			return (-1);
		}
	}
	close(c);
	return (1);
}
