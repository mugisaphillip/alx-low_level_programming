#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @n: input
 * Return: n
 */

char *leet(char *n)
{
	int m;
	int s;

	char st1[] = "aAeEoOtTlL";
	char st2[] = "4433007711";

	for (m = 0; n[m] != '\0'; m++)
	{
		for (s = 0; s < 10; s++)
		{
			if (n[m] == st1[s])
			{
				n[m] = st2[s];
			}
		}
	}
	return (n);
}
