#include "main.h"

/**
 * print_triangle - prints
 * @size: int
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			if (b < size - a - 1)
				_putchar(' ');
			else
				_putchar('#');
		}

		_putchar('\n');
	}
}
