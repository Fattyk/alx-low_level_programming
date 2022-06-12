/**
 * _strchr - a function that locates a character in a string
 *
 * @s: pointer to given string
 * @c: character to locate from the string
 *
 * Return: first occurence of charatcer else null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return ('\0');
}
