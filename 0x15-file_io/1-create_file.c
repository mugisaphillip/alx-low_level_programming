#include <fcntl.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of file
 * @text_content: content to write to file
 *
 * Return: 1 on success, -1 on failure
 */


int create_file(const char *filename, char *text_content)
{
	int fd, perm, n_written;

	perm = 0600;
	if (filename == NULL)
		return (-1);

	fd = creat(filename, perm);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (0);
	}

	n_written = write(fd, text_content, sizeof(text_content));
	if (n_written < 1)
		return (-1);

	close(fd);
	return (0);
}
