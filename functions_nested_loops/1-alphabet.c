#include <stdio.h>
/**
 * print_alphabet - prints alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	putchar('\n');

	return;
}
