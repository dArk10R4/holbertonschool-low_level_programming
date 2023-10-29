/**
 * _strchr - finds
 * @s: char*
 * @c: char
 *
 * Return: char*
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);

		i++;
	}

	if (c == '\0')
		return (s + i);

	return ('\0');
}
