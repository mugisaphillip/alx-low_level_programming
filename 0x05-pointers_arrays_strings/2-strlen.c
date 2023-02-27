#include "main.h"

/*
 * main - returns the length of a string. 
 * @s: string
 * return - string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
