#include <stdio.h>
#include "stdlib.h"

/**
 * main - Program that multiply 2 integers
 * @argc: The number of main arguments supplied
 * @argv: The array of arguments supplied to main
 * Return: Success 0
 */
int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = (num1 * num2);
		printf("%d\n", result);
	}
	return (0);
}
