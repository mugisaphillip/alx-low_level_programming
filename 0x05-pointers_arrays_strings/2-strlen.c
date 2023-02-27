#include "main.h"
/**
 * _strlen - function to print length of a string
 * @s: string
 * Return: string
 */

int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}

	return (leng);
}
