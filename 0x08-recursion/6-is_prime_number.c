#include "main.h"
#include <stdio.h>

int prime_check(int n, int k);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number to be checked
 * Return: return to integer
 */

int is_prime_number(int n)
{
	return (prime_check(n, 1));
}
/**
 * prime_check - checks if number is prime
 * @n: number to be checked
 * @k: iteration
 * Return: 1 for prime and 0 for other
 */
int prime_check(int n, int k)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % k == 0 && k > 1)
	{
		return (0);
	}
	else if ((n / k) < k)
	{
		return (1);
	}
	else
	{
		return (prime_check(n, k + 1));
	}
}
