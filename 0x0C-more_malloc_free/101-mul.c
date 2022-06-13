#include "main.h"

/**
 * print -  prints a string, followed by a new line
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
void print(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

}

/**
 * parseInt - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int parseInt(const char *s)
{
	int sign = 1;
	unsigned long int result = 0, count, i;

	for (count = 0; !(s[count] >= 48 && s[count] <= 57); count++)
	{
		if (s[count] == '-')
		{
			sign *= -1;
		}
	}

	for (i = count; s[i] >= 48 && s[i] <= 57; i++)
	{
		result *= 10;
		result += (s[i] - 48);
	}

	return (sign * result);
}

/**
 * print_int - prints an integer.
 * @n: int
 * Return: 0
 */

void print_int(unsigned long int n)
{

	unsigned  long int divisor = 1, i, result;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		result = n / divisor;
		_putchar('0' + result);
	}

}

/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		print("Error ");
		exit(98);
	}
	print_int(parseInt(argv[1]) * parseInt(argv[2]));
	_putchar('\n');

	return (0);
}
