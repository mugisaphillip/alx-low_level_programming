#include "main.h"
/**
 * print_last_digit - program to print last digit
 * @k: character
 * Return: return to last
 */

int print_last_digit(int k)
{
	int last;

		last = k % 10;
		if (last < 0)
		{
		last = last * -1;
		}
		_putchar(last + '0');
		return (last);
}


