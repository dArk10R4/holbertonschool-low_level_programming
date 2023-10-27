/**
 * _strstr - finds
 * @haystack: char*
 * @needle: char*
 *
 * Return: char*
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	short int c = 0;

	while (*(s + i))
	{
		j = 0;
		c = 1;

		while (*(s + i) && *(accept + j))
		{
			if (*(s + i) != *(accept + j))
			{
				c = 0;
				break;
			}

			i++;
			j++;
		}

		if (c)
			return *(s + i - j);
	}

	return ('\0');
}
