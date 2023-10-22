#include "main.h"

/**
 * print_triangle - prints
 * @size: int
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');

	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			if (j < size - i - 1)
				_putchar(' ');
			else
				_putchar('#');
		}

		_putchar('\n');
	}
}
