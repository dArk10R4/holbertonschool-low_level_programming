/**
  * _strncpy - copies
  * @dest: char*
  * @src: char*
  * @n: char*
  *
  * Return: char*
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);

		if (!*(src + i))
			break;
	}

	return (dest);
}
