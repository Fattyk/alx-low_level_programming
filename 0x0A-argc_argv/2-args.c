#include <stdio.h>

/**
 * main - Program that prints its arguments
 * @argc: The number of main arguments supplied
 * @argv: The array of arguments supplied to main
 * Return: Success 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
