/**
 * _strspn - checks
 * @s: char *
 * @accept: char *
 *
 * Return: ui
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	short int c = 0;

	while (*(s + i))
	{
		c = 1;
		j = 0;

		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				c = 0;
				break;
			}
			j++;
		}

		if (c)
			return (i);

		i++;
	}

	return (i);
}
