#include "main.h"
/**
 * print_triangle - print triangle with #
 * @size: character
 * Return: void
 */

void print_triangle(int size)
{
	int p, k, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < size; p++)
		{
			for (k = size - p; k > 1; k--)
			{
				_putchar(32);
			}
			for (m = 0; m <= p; m++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
