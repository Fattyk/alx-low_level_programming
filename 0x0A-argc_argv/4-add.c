#include <stdio.h>
#include "stdlib.h"

/**
 * main - Program that add positive integers
 * @argc: The number of main arguments supplied
 * @argv: The array of arguments supplied to main
 * Return: Success 0
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i;
	int j;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
