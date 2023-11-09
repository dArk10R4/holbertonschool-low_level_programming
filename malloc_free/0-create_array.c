#include <stdlib.h>

/**
 * create_array - creates char array using malloc
 * @size: unsigned int
 * @c: char
 *
 * Return: char*
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *)malloc(sizeof(char) * size);

	if (!arr)
		return (arr);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
