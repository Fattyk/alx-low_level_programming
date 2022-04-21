#include "main.h"

/**
 * print_rev -  prints a string in reverse
 *
 * @s: pointer to char
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int count = 0;
	char track = *(str + count);
	char las = track

	while (track != 0)
	{
		count += 1;
		track = *(str + count);
	}


	while (count != 0)
	{
		_putchar(track);
		count -= 1;
		track = *(str - count);
	}
	_putchar('\n');
}
