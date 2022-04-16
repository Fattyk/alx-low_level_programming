#include "main.h"
/**
 * _isdigit - checking if its digit 0-9
 * @c: the character we are checking
 * Return: 1 if its a digit, 0 if its not.
 */
int _isdigit(int c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	else
		return (1);
}
