#include "main.h"
/**
 * print_most_numbers - print all numbers except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		if (p == 2 || p == 4)
		{
			continue;
		}
		else
		{
		_putchar(p + '0');
		}
	}
	_putchar('\n');
}
