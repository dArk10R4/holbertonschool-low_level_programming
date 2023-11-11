#include <stdlib.h>

/**
 * malloc_checked - malloc checked
 * @b: unsigned int
 *
 * Return: void*
 */
void *malloc_checked(unsigned int b)
{
	void *ans;

	ans = malloc(b);

	if (ans == NULL)
		exit(98);

	return (ans);
}
