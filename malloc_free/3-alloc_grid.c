#include <stdlib.h>

/**
 * alloc_grid - allocates 2d array of integer
 * @width: int
 * @height: int
 *
 * Return: int **
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **ans;

	ans = (int **)malloc(sizeof(int *) * height);

	if (ans == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ans[i] = (int *)malloc(sizeof(int) * width);

		if (ans[i] == NULL)
			return (NULL);
	}

	return (ans);
}
