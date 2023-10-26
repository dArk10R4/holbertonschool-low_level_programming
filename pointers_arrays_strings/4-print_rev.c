#include "main.h"

/**
  * print_rev - prints string in reverse order
  * @s: char pointer
  */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len))
		len++;

	while (len > 0)
	{
		_putchar(*(s + len - 1));
		len--;
	}
}
