/**
  * _strncat - concatenate
  * @dest: char*
  * @src: char*
  * @n: int
  *
  * Return: char*
  */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int len2 = 0;

	while (*(dest + len))
		len++;

	while (*(src + len2) && len2 < n)
	{
		*(dest + len + len2) = *(src + len2);
		len2++;
	}

	if (n >= len2)
		*(dest + len + len2) = '\0';

	return (dest);
}
