#include "main.h"

/**
 * rev_string -  string in reverse
 *
 * @s: pointer to char
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int count = 0;
	char track = *(s + count);
	char i[];
	int counts = 0;

	while (track != 0)
	{
		count += 1;
		track = *(s + count);
	}

	count -= 1;

	while (count >= 0)
	{
		track = *(s + count);
		i[counts] = track;
		count -= 1;
		counts += 1
		track = *(s - count);
	}
	*s = i;
}
