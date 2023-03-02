#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string
 * @src: string
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int p;
	int k;

	p = 0;
	k = 0;

	while (dest[p] != '\0')
	{
		p++;
	}
	while (k < n && src[k] != '\0')
	{
		dest[p] = src[k];
		p++;
		k++;
	}
	dest[p] = '\0';
	return (dest);
}
