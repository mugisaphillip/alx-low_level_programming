#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer
 * Return: p
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, p;

	p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (p);
}
