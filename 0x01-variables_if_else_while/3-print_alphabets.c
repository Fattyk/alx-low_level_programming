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
		putchar(k);
		k++;
	}
	k = 65;
	while (k <= 90)
	{
		putchar(k);
		k++;
	}
	putchar(10);
	return (0);
}
