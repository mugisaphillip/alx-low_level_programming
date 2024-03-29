#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: mame of file
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, n_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;

	n_written = write(fd, text_content, len);
	if (n_written == -1)
		return (-1);

	close(fd);
	return (1);
}
