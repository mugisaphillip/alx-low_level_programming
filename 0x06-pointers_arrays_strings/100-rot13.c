#include "main.h"
/**
 * rot13 -  function that encodes a string using rot13
 * @str: pointer
 * Return: p
 */

char *rot13(char *str)
{
	int i;
	int j;
	char tp1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYAabcdefghijklmnopqrstuvwxyz";
	char tp2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == tp1[j])
			{
				str[i] = tp2[j];
				break;
			}
		}

	}
	return (str);
}
