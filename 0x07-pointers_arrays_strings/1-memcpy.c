#include "main.h"

/**
 * _memcpy -  function that copies memory area
 * @dest: pointer to memory area
 * @src: pointer to memeory area
 * @n: unsigned integer
 * Return: return to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
