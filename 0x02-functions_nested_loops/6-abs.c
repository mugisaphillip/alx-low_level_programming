#include "main.h"
/**
 *  _abs - program to execute absolute value of a number
 * @k: character to be executed
 * Return: return to absolute value of number or k
 */

int _abs(int k)
{


	if (k < 0)
	{
		int absolute;

		absolute = k * -1;
		return (absolute);
	}
	return (k);
}
