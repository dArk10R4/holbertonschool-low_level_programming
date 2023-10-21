#include "main.h"

/**
 * print_num - prints
 * @n: int
 */
void print_num(int n)
{
	if (n < 10)
	{
		_putchar(n + 48);
	}
	else
	{
		_putchar(n / 10 + 48);
		_putchar(n % 10 + 48);
	}
}

/**
 * print_to_98 - print from n till 98
 * @n: int start
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 0)
			print_num(-i);
		else
			print_num(i);

		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}
