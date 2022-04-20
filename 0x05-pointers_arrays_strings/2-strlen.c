#include "main.h"

/**
 * _strlen - check the code
 *
 * @s - pointer to char
 *
 * Return: count (int)
 */

int _strlen(char *s)
{
	char i[] = *s;
	int count = 0;
	char track = i[0];

	while (track != 0)
	{
		count += 1;
		track = i[count];
	}
	return (count);
}
