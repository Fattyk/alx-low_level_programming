#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: char array string type
 */

void puts_half(char *str)
{
	jnt j;

	for (j = 0; str[j] != '\0'; j++)
		;

	j++;
	for (j /= 2; str[j] != '\0'; j++)
	{
		_putchar(str[j]);

	}
	_putchar('\n');
}
