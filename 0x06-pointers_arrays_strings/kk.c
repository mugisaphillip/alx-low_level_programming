#include "main.h"
#include <string.h>

/**
 * infinite_add - function that adds two numbers
 * @n1: number 1
 * @n2: number 2
 * @r: bufffer
 * @size_r: buffer size
 * Return: 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int flow = 0, i = 0, j = 0, digit = 0;
	int var1 = 0, var2 = 0, temp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || flow == 1)
	{
		if (i < 0)
			var1 = 0;
		else
			var1 = *(n1 + i) - '0';
		if (j < 0)
			var2 = 0;
		else
			var2 = *(n2 + j) - '0';
		temp = var1 + var2 + flow;
		if (temp >= 10)
			flow = 1;
		else
			flow = 0;
		if (digit >= (size_r - 1))
			return (0);
		*(r + digit) = (temp % 10) + '0';
		digit++;
		j--;
		i--;
	}
	if (digit == size_r)
		return (0);
	*(r + digit) = '\0';
	 cap_string(r);
	return (r);
}
