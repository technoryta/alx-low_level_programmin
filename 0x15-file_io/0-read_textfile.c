#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file
 * @filename: name of file to read
 * @letters: number of letters to read
 * Return: amount of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, written, printed;
	char *buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	printed = read(fd, buffer, letters);
	if (printed < 0)
		return (0);
	written = write(STDOUT_FILENO, buffer, printed);
	if (written < 0)
		return (0);
	if (close(fd) < 0)
		return (0);

	free(buffer);
	return (printed);
}
