#include "stdio.h"

/**
  * print_array - prints an array
  * @a: array
  * @n: int
  */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
