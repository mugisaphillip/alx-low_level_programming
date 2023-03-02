#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int k;
	int p;

	k = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	p = 0;

	while (src[p] != '\0')
	{
	dest[k] = src[p];
p++;
k++;
	}
	dest[k] = '\0';
	return (dest);
}
