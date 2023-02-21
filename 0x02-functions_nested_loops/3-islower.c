#include "main.h"
/**
 * _islower - program that checks lowercase character
 * Return: return 1 for lowercase and 0 for otherwise
 *@c: character to be checked in the program
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
