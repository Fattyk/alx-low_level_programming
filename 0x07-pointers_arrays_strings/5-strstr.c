/**
 * _strstr - a function that locates a substring
 *
 * @haystack: string to search
 * @needle: subtring to search for
 *
 * Return: a pointer to the beginning substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{

	char *hay, *nid;

	while (*haystack != '\0')
	{
		hay = haystack;
		nid = needle;
		while (*nid != '\0' && *haystack == *nid)
		{
			haystack++;
			nid++;
		}
		if (!*nid)
			return (hay);
		haystack++;
	}
	return ('\0');
}
