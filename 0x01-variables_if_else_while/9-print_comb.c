#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k;

	k = 48;
	while (k <= 57)
	{
		putchar(k);
		if (k == 57)
		{
			break;
		}
		putchar(44);
		putchar(' ');
		k++;
	}
	putchar(10);
	return (0);
}
