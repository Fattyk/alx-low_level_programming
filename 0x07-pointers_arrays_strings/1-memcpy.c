/**
 * _memcpy - a function that copies memory area
 *
 * @dest: destination memory to copy to
 * @src: source memory to copy from
 * @n: total number of @src bytes
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		dest[count] = src[count];
	return (dest);
}
