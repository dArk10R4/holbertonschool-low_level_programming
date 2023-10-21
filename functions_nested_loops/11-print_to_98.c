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
	else if (n < 100)
	{
		_putchar(n / 10 + 48);
		_putchar(n % 10 + 48);
	}
	else
	{
		_putchar(n / 100 + 48);
		_putchar(n / 10 % 10 + 48);
		_putchar(n % 10 + 48);
	}
}

/**
 * print_to_98 - print from n till 98
 * @n: int start
 */
void print_to_98(int n)
{
	int i = n;

	while ((n <= 98 && i <= 98) || (n >= 98 && i >= 98))
	{
		if (i < 0)
		{
			_putchar('-');
			print_num(-i);
		}
		else
		{
			print_num(i);
		}

		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (i == 98)
			break;

		n >= 98 ? i-- : i++;
	}

	_putchar('\n');
}
