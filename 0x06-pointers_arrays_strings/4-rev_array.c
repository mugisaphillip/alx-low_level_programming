#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: string
 * @n: number of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int k;
	int p;

	for (k = 0; k < n--; k++)
	{
		p = a[k];
		a[k] = a[n];
		a[n] = p;
	}
}
