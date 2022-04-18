#include "main.h"

/**
 * print_alphabet_x10 - print lower case letters x10
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char k = 0;

	while (k < 10)
	{
		print_alphabet();
		k++;
	}
	_putchar('\n');
}
