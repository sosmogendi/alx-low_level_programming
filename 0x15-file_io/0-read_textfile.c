#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the filename
 * @letters: count of letters
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count;
	char *buffer2;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer2 = malloc(letters);
	if (buffer2 == NULL)
	{
		close(fd);
		return (0);
	}

	count = read(fd, buffer2, letters);
	if (count == -1)
	{
		free(buffer2);
		close(fd);
		return (0);
	}

	if (write(STDOUT_FILENO, buffer2, count) != count)
	{
		free(buffer2);
		close(fd);
		return (0);
	}

	free(buffer2);
	close(fd);
	return (count);
}