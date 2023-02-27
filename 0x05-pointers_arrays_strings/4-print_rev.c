#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	for (p -= 1; p >= 0; p--)
	{
		_putchar(s[p]);
	}
	_putchar('\n');
}
