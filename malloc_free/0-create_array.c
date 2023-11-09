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
	int i;

	arr = (char*)malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
