#include "main.h"
/**
 * rev_string - program to reverse the string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int leng = 0;
	int p = 0;
	char rev;

	while (s[p++])
		leng++;

	for (p = leng - 1; p >= leng / 2; p--)
	{
		rev = s[p];
		s[p] = s[leng - p - 1];
		s[leng - p - 1] = rev;
	}
}
