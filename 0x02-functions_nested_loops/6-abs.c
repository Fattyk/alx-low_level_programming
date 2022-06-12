#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: n is an integer to compute
 *
 * Return: integer
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}
}
