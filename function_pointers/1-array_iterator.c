#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - array iterator
 * @array: int *
 * @size: size_t
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
