#include "main.h"
/**
 * print_alphabet - entry point of program to print alphabets
 * Return: void
 */

void print_alphabet(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
		_putchar(p);
	_putchar('\n');
}
