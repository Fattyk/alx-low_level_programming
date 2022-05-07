#include <stdio.h>

/**
 * main - Program that prints its number of arguments
 * @argc: The number of main arguments supplied
 * @argv: The array of arguments supplied to main
 * Return: Success 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
