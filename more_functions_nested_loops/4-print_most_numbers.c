#include "main.h"

/**
 * print_most_numbers - prints
 */
void print_most_numbers(void)
{
	char a = '0';

	for (; a <= '9'; a++)
	{
		if (a == '2' || a == '4')
			continue;

		_putchar(a);
	}

	_putchar('\n');
}
