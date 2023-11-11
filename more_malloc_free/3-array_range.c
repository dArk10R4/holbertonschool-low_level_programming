#include <stdlib.h>

/**
 * array_range - array range
 * @min: min
 * @max: max
 *
 * Return: int*
 */
int *array_range(int min, int max)
{
	int *ans;
	int i;

	if (min > max)
		return (NULL);

	ans = malloc(sizeof(int) * (max - min + 1));

	if (ans == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		ans[i] = min + i;

	return (ans);
}
