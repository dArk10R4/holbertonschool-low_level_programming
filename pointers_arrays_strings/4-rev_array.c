/**
 * reverse_array - reverse an array
 * @a: int*
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		*(a + i) += *(a + n - 1 - i);
		*(a + n - 1 - i) = *(a + i) - *(a + n - 1 - i);
		*(a + i) -= *(a + n - 1 - i);
	}
}
