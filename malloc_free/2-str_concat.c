#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatiate
 * @s1: char*
 * @s2: char*
 *
 * Return: char*
 */
char *str_concat(char *s1, char *s2)
{
	int s1_l = strlen(s1), s2_l = strlen(s2);
	int i = 0;
	char *s;

	s = (char *)malloc(sizeof(char) * (s1_l + s2_l + 1));

	if (s == NULL)
		return (NULL);

	while (*(s1 + i))
		s[i] = s1[i];

	while (*(s2 + i - s1_l))
		s[i] = s2[i - s1_l];

	s[i] = '\0';
	return (s);
}
