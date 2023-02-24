#include "main.h"

/*
 * main - checks for uppercase character.
 * @c - test character
 * return - 0 if c is uppercase
 * return - 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
