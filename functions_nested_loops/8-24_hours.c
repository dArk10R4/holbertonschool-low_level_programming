#include "main.h"
/**
 *jack_bauer - prints time
 *
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i < 2400; i++)
	{
		_putchar(i / 1000);
		_putchar((i / 100) % 10);
		_putchar(':');
		_putchar((i / 10) % 10);
		_putchar(i % 10);
		_putchar('\n');
	}
}
