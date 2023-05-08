#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the STDOUT_FILENO.
 * @filename: file name to read
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read if filename is NULL  0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[BUFSIZE];
	int txt_file, total, status;

	if (filename == NULL)
		return (0);

	txt_file = open(filename, O_RDONLY);
	if (txt_file == -1)
		return (0);

	total = 0;
	status = 1;
	while (letters > BUFSIZE && status != 0)
	{
		status = read(txt_file, buffer, BUFSIZE);
		write(STDOUT_FILENO, buffer, status);
		total += status;
		letters -= BUFSIZE;
	}
	status = read(txt_file, buffer, letters);
	write(STDOUT_FILENO, buffer, status);
	total += status;
	close(txt_file);
	return (total);
}
