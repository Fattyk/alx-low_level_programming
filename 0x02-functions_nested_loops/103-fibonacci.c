#include <stdio.h>

/**
 * main - a program that finds and prints the sum of the even-valued terms
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, k, l, result;

	j = 1;
	k = 2;
	result = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			result = result + j;
		}
		l = j + k;
		j = k;
		k = l;
	}

	printf("%lu\n", result);

	return (0);
}
