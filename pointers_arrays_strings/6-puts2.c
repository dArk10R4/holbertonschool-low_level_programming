#include "main.h"

/**
  * puts2 - puts
  * @srt: char*
  */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (*(str + len))
		len++;

	for (i = 0; i < len; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
