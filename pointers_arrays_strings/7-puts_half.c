#include "main.h"

/**
  * puts_half - prints half
  * @str: char*
  */
void puts_half(char *str)
{
	int size = sizeof(str) / sizeof(char);
	int i;

	for (i = size / 2; i > 0; i--)
	{
		_putchar(*(str + size - i + 1));
	}
	_putchar('\n');
}
