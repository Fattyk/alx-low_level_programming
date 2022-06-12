/**
 * _memset  - a function that fills memory with a constant byte
 * @s: pointer to memory to fiill
 * @b: charater variable to fill s
 * @n: unsigned int
 * Return: A pointer to the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;

	return (s);
}
