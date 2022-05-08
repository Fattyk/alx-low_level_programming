#include <stdio.h>
#include "stdlib.h"

/**
 * main - Program that print cent change
 * @argc: The number of main arguments supplied
 * @argv: The array of arguments supplied to main
 * Return: Success 0
 */
int main(int argc, char *argv[])
{
	int result, count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]);
	if (result < 0)
	{
		printf("0\n");
		return (0);
	}
	while (result > 0)
	{
		count++;
		if ((result - 25) >= 0)
		{
			result -= 25;
			continue;
		}
		if ((result - 10) >= 0)
		{
			result -= 10;
			continue;
		}
		if ((result - 5) >= 0)
		{
			result -= 5;
			continue;
		}
		if ((result - 2) >= 0)
		{
			result -= 2;
			continue;
		}
		result--;
	}
	printf("%d\n", count);
	return (0);
}
