#include "main.h"
/**
 * _isdigit - checks digits
 * @c:character to be checked
 * Return: return to 1 if it is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
