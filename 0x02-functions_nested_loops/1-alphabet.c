#include "main.h"

/**
 * print_alphabet - print lower case letters
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
