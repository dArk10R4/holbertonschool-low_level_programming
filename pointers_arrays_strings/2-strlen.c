/**
  * _strlen - the length of the string
  * @s: string
  *
  * Return: int
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
}
