#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char k;

	k = 97;
	while (k <= 122)
	{
		if ((k != 101) && (k != 113))
		{
			putchar(k);
		}
		k++;
	}
	putchar(10);
	return (0);
}
