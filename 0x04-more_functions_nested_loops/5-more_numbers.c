#include "main.h"
/**
 * more_numbers - prints 10 timesnumber from 0 t0 14
 * Return: return to 0
 */

void more_numbers(void)
{
	int k, m;

	for (k = 0; k <= 9; k++)
	{
		for (m = 0; m <= 14; m++)
		{
		if (m > 9)
		{
			_putchar((m / 10) + '0');
		}
		_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
