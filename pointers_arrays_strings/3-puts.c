#include "main.h"

/**
  * _puts - puts
  * @str: *char
  */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
