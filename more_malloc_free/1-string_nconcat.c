#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatiate strings
 * @s1: char*
 * @s2: char*
 * @n: int
 *
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ans;
	int l_s1 = (s1 == NULL) ? 0 : strlen(s1);
	int l_s2 = (s2 == NULL) ? 0 : (strlen(s2) < n) ? strlen(s2) : n;
	int l = l_s1 + l_s2 + 1;
	int i;

	ans = malloc(sizeof(char) * l);

	if (ans == NULL)
		return (NULL);

	for (i = 0; i < l_s1; i++)
		ans[i] = s1[i];

	for (i = 0; i < l_s2; i++)
		ans[i + l_s1] = s2[i];

	ans[l_s1 + l_s2] = '\0';

	return (ans);
}
