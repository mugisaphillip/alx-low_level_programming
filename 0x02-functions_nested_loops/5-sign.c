#include "main.h"
/**
 * print_sign - program to print sign of number
 * @n: character to be checked in the program
 * Return: return 1 to positive -1 to negative and and 0 to zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
