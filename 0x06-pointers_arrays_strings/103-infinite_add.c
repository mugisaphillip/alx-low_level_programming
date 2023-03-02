#include "main.h"
#include <string.h>
/**
 * infinite_add - function that adds two numbers
 * @n1: number
 * @n2: number
 * @r: buffer
 * @size_r: buffer size
 * Return: 0 and r
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int sum = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int digit1 = i >= 0 ? n1[i] - '0' : 0;
		int digit2 = j >= 0 ? n2[j] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		sum %= 10;
		if (k >= size_r - 1)
		{
			return (0);
		}
		r[k++] = sum + '0';
		i--;
		j--;
	}
	r[k] = '\0';
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
