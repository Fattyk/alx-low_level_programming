#include "main.h"

/**
 * _strlen - check the code
 *
 * @s: pointer to char
 *
 * Return: count (int)
 */

int _strlen(char *s)
{
	int count = 0;
	char track = *(s + count);

	while (track != 0)
	{
		count += 1;
		track = *(s + count);
	}
	return (count);
}
