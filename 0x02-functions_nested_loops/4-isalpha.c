#include "main.h"
/**
 * _isalpha - program to check alphabet character
 * @c: character to be checked in the program
 * Return: return to 1 for lower or upper and 0 for others
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
