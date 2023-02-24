#include "main.h"

/**
 * _isupper - checks the upper case character
 * @c: character to be checked
 * Return: return to 1 if c is upper and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
