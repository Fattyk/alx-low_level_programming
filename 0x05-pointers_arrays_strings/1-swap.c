#include "main.h"

/**
 * swap_int - Function to swap values
 *
 * @a: a pointer to an integer variable address 1
 * @b: a pointer to an integer var addr 2
 *
 * Return: (0)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
