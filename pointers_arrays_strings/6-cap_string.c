/**
 * cap_string - captilize
 * @s: char *
 *
 * Return: char *
 */
char *cap_string(char *s)
{
	int i = 1;
	int j;

	if (*s != '\0' && *s >= 'a' && *s <= 'z')
		*s = *s - 'a' + 'A';
	else if (!*s)
		return (s);

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				if (*(s + i - 1) == {}[j])
				{
					*(s + i) = *(s + i) - 'a' + 'A';
					break;
				}
			}
		}
	}

	return (s);
}
