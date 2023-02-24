#include "main.h"
/**
 * print_numbers - prints number from 0 tp 9
 * Return: return to void
 */

void print_numbers(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		_putchar(p + '0');
	}
	_putchar('\n');
}
