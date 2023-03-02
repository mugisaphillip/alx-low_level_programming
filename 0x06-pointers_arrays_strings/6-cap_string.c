#include "main.h"
/**
 * cap_string -  function that capitalizes all words of a string
 * @str: string
 * Return: pointer
 */

char *cap_string(char *str)
{
	int p = 0;

	while (str[p])
	{
		while (!(str[p] >= 'a' && str[p] <= 'z'))
			p++;
		if (str[p - 1] == ' ' ||
				str[p - 1] == '\t' ||
				str[p - 1] == '\n' ||
				str[p - 1] == ',' ||
				str[p - 1] == ';' ||
				str[p - 1] == '.' ||
				str[p - 1] == '!' ||
				str[p - 1] == '?' ||
				str[p - 1] == '"' ||
				str[p - 1] == '(' ||
				str[p - 1] == ')' ||
				str[p - 1] == '{' ||
				str[p - 1] == '}' ||
				p == 0)
			str[p] -= 32;
		p++;
	}
return (str);
}
