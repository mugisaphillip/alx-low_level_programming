#include "main.h"
/**
 * print_alphabet_x10 - entry point of program to print 10 times alphabet
 * Return: return to void
 */

void print_alphabet_x10(void)
{
	int p;
	char m;

	for (p = 0; p <= 9; p++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
