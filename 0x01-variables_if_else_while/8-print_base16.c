#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char k;

	k = 48;
	while (k <= 57)
	{
		putchar(k);
		k++;
	}
	k = 97;
	while (k <= 102)
	{
		putchar(k);
		k++;
	}
	putchar(10);
	return (0);
}
