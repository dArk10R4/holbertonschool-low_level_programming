#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - int index
 * @array: int *
 * @size: int
 * @cmp: func
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 1)
		    return (i);

	return (-1);
}
