#include <stdio.h>
#include <math.h>
/**
 * main - print the prime number
 * Return: 0
 */

int main(void)
{
	long y, max;
	long number = 612852475143;
	double square = sqrt(number);

	for (y = 1; y <= square; y++)
	{
		if (number % y == 0)
		{
			max = number / y;
		}
	}
	printf("%ld\n", max);
	return (0);
}
