#include "main.h"
/**
  * flip_bits - calculates the number of bits needed
  * to get from one number to another
  * @n: base number
  * @m: number to transform to
  * Return: the number of bit transformations needed
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int idx, result;

	result = 0;
	for (idx = 8 * sizeof(n) - 1; idx >= 0; idx--)
		if (((n ^ m) >> idx) & 1)
			result++;
	return (result);
}
