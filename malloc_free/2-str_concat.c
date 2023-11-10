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
	int s1_l = (s1 != NULL) ? strlen(s1)  : 0;
	int s2_l = (s2 != NULL) ? strlen(s2) : 0;
	int i;
	char *s;

	s = (char *)malloc(sizeof(char) * (s1_l + s2_l + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1_l; i++)
		s[i] = s1[i];

	for (i = 0; i < s2_l; i++)
		s[i + s1_l] = s2[i];

	s[s1_l + s2_l] = '\0';
	return (s);
}
