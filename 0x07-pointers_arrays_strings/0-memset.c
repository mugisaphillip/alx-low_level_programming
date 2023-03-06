#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to a memory
 * @n: integer
 * @b: constant byte
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{

		s[k] = b;
	}
	return (s);
}
