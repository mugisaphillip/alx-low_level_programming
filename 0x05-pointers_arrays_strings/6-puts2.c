#include "main.h"
/**
 * puts2 - function to print every character of the string
 * @str:  string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int n;
	int p = 0;

	while (str[p] !=  '\0')
	{
		p++;
	}

	for (n = 0; n < p; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
