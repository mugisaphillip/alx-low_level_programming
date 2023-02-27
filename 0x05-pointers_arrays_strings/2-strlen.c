#include "main.h";

/*
 * main - returns the length of a string. 
 * return - 0
 */

int _strlen(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
