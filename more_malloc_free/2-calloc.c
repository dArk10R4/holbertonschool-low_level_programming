#include <stdlib.h>

/**
 * _calloc - calloc
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ans;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ans = malloc(nmemb * size);

	if (ans == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ans[i] = 0;

	return (ans);
}
