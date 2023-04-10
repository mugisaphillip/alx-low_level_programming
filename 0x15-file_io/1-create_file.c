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
	int fd, n_written, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (0);
	}

	for (len = 0; text_content[len]; len++)
		;

	n_written = write(fd, text_content, len);
	if (close(fd) == -1)
		return (-1);

	return (n_written == -1 ? -1 : 1);
}
