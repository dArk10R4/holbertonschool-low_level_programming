#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copies
 * @str: char *
 *
 * Return: char*
 */
char *_strdup(char *str)
{
	char *copy;
	int i = 0;

	copy = (char *)malloc(sizeof(char) * (strlen(str) + 1));

	if (copy == NULL)
		return (NULL);

	while (*(str + i))
	{
		copy[i] = str[i];
		i++;
	}

	copy[i] = '\0';

	return (copy);
}
