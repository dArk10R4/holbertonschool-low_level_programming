#include <stdio.h>
#include "search_algos.h"

/**
 * prnt_arr - prints array
 * @array: array
 * @l: left
 * @r: right
 */
void prnt_arr(int *array, size_t l, size_t r)
{
	printf("Searching in array: ");
	for (; l < r; l++)
		printf("%d, ", array[l]);

	printf("%d\n", array[r]);
}

/**
 * binary_search - binary search
 * @array: array
 * @size: size
 * @value: value
 *
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, m;

	while (l <= r)
	{
		prnt_arr(array, l, r);

		m = (l + r) / 2;

		if (array[m] == value)
			return (m);

		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}

	return (-1);
}
