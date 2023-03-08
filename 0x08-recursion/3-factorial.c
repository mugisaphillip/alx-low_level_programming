#include "main.h"

/**
 * factorial - program returns to the factorial of a given number
 * @n: number
 * Return: -1, 1 or factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
