#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int mem1 = 0, mem2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[mem1] != '\0')
	{
		mem1++;
	}

	while (s2[mem2] != '\0')
	{
		mem2++;
	}

	if (n > mem2)
		n = mem2;
	ptr = malloc((mem1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (0);

	for (i = 0; i < mem1; i++)
	{
		ptr[i] = s1[i];
	}

	for (; i < (mem1 + n); i++)
	{
		ptr[i] = s2[i - mem1];
	}
	ptr[i] = '\0';

	return (ptr);
}
