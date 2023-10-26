#include "main.h"

/**
  * puts2 - puts 
  * @s: char*
  */
void puts2(char *str)
{
	int len = sizeof(str);
	int i;

	for (i = 0; i <= len; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
