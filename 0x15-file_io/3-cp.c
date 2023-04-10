#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include "main.h"

#define BUF_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: number of args
 * @argv: arg array
 * Return: 0 on success, non-zero value on failure
 */

int main(int argc, char *argv[])
{
	/* mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH; */
	char size[BUF_SIZE];
	int fd_fro, fd_to, size_cp, size_paste;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	/* Open file_from  */
	fd_fro = open(argv[1], O_RDONLY);
	if (fd_fro == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}

	/* Create file_to or open it if it exists */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(fd_fro);
	exit(99);
	}

	/* copy file */
	do {
	size_cp = read(fd_fro, size, BUF_SIZE);
	if (size_cp == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	close(fd_fro);
	close(fd_to);
	exit(98);
	}

	size_paste = write(fd_to, size, size_cp);
	if (size_paste == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(fd_fro);
	close(fd_to);
	exit(99);
	}
	} while (size_cp > 0);

	/* close file descriptors */
	if (close(fd_fro) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_fro);
	close(fd_to);
	exit(100);
	}

	if (close(fd_to) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	exit(100);
	}

	return (0);
}
