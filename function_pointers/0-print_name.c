#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: char *
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
