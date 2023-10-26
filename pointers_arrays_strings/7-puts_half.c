#include "main.h"

/**
  * puts_half - prints half
  * @str: char*
  */
void puts_half(char *str)
{
	int size = 0;
	int i;

	while (*(str + size))
		size++;

	for (i = size / 2; i > 0; i--)
	{
		_putchar(*(str + size - i));
	}
	_putchar('\n');
}
