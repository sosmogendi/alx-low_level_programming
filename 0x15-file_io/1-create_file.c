#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, file2, size = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[size])
			size++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		file2 = write(fd, text_content, size);
		if (file2 == -1 || file2 != size)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
