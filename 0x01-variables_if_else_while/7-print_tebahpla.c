#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char k;

	k = 122;
	while (k >= 97)
	{
		putchar(k);
		k--;
	}
	putchar(10);
	return (0);
}
