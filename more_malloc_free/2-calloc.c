#include <stdlib.h>
#include <string.h>

/**
 * _calloc - calloc
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ans;


	if (nmemb == 0 || size == 0)
		return (NULL);

	ans = malloc(nmemb * size);

	if (ans == NULL)
		return (NULL);

	memset(ans, 0, nmemb * size);

	return (ans);
}
