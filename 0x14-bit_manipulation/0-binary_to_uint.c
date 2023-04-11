#include "main.h"
/**
  * _stoi - converts chars to ints
  * @c: char to convert
  * Return: converted int
  */
unsigned int _stoi(char c)
{
	return ((unsigned int) c - '0');
}

/**
  * _strlen - calculates the length of the string
  * @str: input
  * Return: length of string
  */
unsigned int _strlen(const char *str)
{
	unsigned int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/**
  * binary_to_uint - converts a string of 1's and 0's to a decimal number
  * @b: string to convert
  * Return: unsigned decimal number
  */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result, temp, expo;

	if (!b)
		return (0);
	result = temp = 0;
	expo = 0;
	for (i = _strlen(b) - 1; b[i]; i--, expo *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		temp = _stoi(b[i]);
		result += temp * expo;
	}
	return (result);
}
