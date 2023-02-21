#include "main.h"
/**
 * jack_bauer - program that prints every minute of the day
 * Return: return
 */

void jack_bauer(void)
{
	int k, m, o, p;

	for (k = 0; k <= 2; k++)
	{
		for (m = 0; m <= 9; m++)
		{
			if ((k <= 1 && m <= 9) || (k <= 2 && m <= 3))
			{
				for (o = 0; o <= 5; o++)
				{
					for (p = 0; p <= 9; p++)
					{
						_putchar(k + '0');
						_putchar(m + '0');
						_putchar(58);
						_putchar(o + '0');
						_putchar(p + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
