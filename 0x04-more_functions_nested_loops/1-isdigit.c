#include "main.h"

/*
 * main - checks for a digit (0 through 9).
 * @c - test digit
 * return - 0 if c is digit
 * return - 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
