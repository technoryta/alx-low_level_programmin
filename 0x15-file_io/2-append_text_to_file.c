#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file to read
 * @text_content: text to append
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		written = write(fd, text_content, len);
		if (written < 0)
			return (-1);
	}
	if (close(fd) < 0)
		return (-1);
	return (1);
}
