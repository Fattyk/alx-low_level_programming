#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k;

	k = 97;
	while (k <= 122)
	{
		putchar(k);
		k++;
	}
	putchar(10);
	return (0);
}
