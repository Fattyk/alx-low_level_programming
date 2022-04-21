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
	char track = *(s + count);

	while (track != 0)
	{
		count += 1;
		track = *(s + count);
	}


	while (count >= 0)
	{
		track = *(s + count);
		_putchar(track);
		count -= 1;
		track = *(s - count);
	}
	_putchar('\n');
}
