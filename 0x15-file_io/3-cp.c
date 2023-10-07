#include "main.h"
#include <stdio.h>

/**
 * main - main entry point
 * @ac: argument count
 * @av: array of arguments
 * Return: int
 */
int main(int ac, char **av)
{
	int sourcefd, destinfd, written, readout;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	sourcefd = open(av[1], O_RDONLY);
	if (sourcefd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Cna't read from file %s\n", av[1]);
		exit(98);
	}
	destinfd = open(av[2],  O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (destinfd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((readout = read(sourcefd, buffer, 1024)) > 0)
	{
		written = write(destinfd, buffer, sourcefd);
		if (written < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (readout < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(sourcefd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", sourcefd);
		exit(100);
	}
	if (close(destinfd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", destinfd);
		exit(100);
	}
	return (0);
}
