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
	void *ans;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ans = malloc(nmemb * size);

	return (ans);
}
