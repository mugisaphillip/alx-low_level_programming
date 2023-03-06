#include "main.h"
#include <string.h>
/**
 * _strstr - function that locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int haystack_len = strlen(haystack);
	int needle_len = strlen(needle);

	if (needle_len > haystack_len)
	{
		return (0);
	}
	for (i = 0; i <= haystack_len - needle_len; i++)
	{
		if (strncmp(haystack + i, needle, needle_len) == 0)
		{
			return (haystack + i);
		}
	}
	return (0);
}
