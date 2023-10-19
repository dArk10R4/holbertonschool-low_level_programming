#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabet
 *
 */

void print_alphabet_x10(void)
{
	char i;
	int i = 0;

	for (; i < 10; i++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		putchar('\n');
	}
}
