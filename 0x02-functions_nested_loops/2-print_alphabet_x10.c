#include "main.h"

/**
 * print_alphabet_x10 - print lower case letters x10
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int letter;
	int k;


	k = 0;
	while (k < 10)
	{
		for (letter = 'a' ; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		k++;
		_putchar('\n');
	}
}
