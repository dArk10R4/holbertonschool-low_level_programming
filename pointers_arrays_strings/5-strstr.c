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

	while (*(haystack + i))
	{
		j = 0;
		c = 1;

		while (*(haystack + i) && *(needle + j))
		{
			if (*(haystack + i) != *(needle + j))
			{
				c = 0;
				break;
			}

			i++;
			j++;
		}

		if (c)
			return (haystack + i - j);

		i++;
	}

	return ('\0');
}
