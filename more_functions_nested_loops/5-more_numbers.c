#include "main.h"

/**
 * more_numbers - prints nums
 */
void more_numbers(void)
{
	int x;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x >= 10)
				_putchar(x / 10 + 48);

			_putchar(x % 10 + 48);
		}

		_putchar('\n');
	}
}
