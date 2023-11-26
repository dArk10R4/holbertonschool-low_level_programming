#include "function_pointers.h"
#inlcude <stdlib.h>

/**
 * print_name - prints name
 * @name: char *
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
