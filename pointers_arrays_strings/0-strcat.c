/**
  * _strcat - concatenate
  * @dest: char*
  * @src: char*
  *
  * Return: char*
  */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int len2 = 0;

	while (*(dest + len))
		len++;

	while (*(src + len2))
	{
		*(dest + len + len2) = *(src + len2);
		len2++;
	}

	*(dest + len + len2) = '\0';

	return (dest);
}
