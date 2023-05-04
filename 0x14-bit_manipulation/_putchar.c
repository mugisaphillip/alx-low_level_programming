#include <unistd.h>
/**
 * _putchar - output a character to the standard output
 * @c: character to print
 * Return: write status
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

