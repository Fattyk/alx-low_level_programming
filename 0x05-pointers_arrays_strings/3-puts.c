#include "main.h"

/**
 * void _puts -  prints a string, followed by a new line, to stdout
 *
 * @str: pointer to char
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int count = 0;
	char track = *(s + count);

	while (track != 0)
	{
		_putchar(track);
		count += 1;
		track = *(s + count);
	}
	_putchar('\n');
}
