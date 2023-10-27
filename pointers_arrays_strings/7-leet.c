/**
 * leet - leet
 * @s: char *
 *
 * Return: char*
 */
char *leet(char *s)
{
	int i = 0, j;
	char lord[][3] = {{'a', 'A', '4'}, {'e', 'E', '3'}, {'o', 'O', '0'},
		      {'t', 'T', '7'}, {'l', 'L', '1'}};

	while (*(s + i))
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == lord[j][0] || *(s + i) == lord[j][1])
			{
				*(s + i) = lord[j][2];
				break;
			}
		}
	}

	return (s);
}
