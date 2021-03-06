#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: n is an integer to check its last digit
 *
 * Return: the last digit (integer)
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
