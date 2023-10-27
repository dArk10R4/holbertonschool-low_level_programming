/**
  * _strcmp - compares
  * @s1: char*
  * @s2: char*
  *
  * Return: int
  */
int _strcmp(char *s1, char *s2)
{
	int len = 0;

	while (*(s1 + len) && *(s2 + len))
	{
		if (*(s1 + len) - *(s2 + len))
			return (*(s1 + len) - *(s2 + len));

		len++;
	}
	return (*(s1 + len) - *(s2 + len));
}
