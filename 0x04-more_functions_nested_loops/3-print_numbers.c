#include "main.h"

/*
 * main - prints the numbers, from 0 to 9
 * followed by a new line.
 * return - void
 */

void print_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}
