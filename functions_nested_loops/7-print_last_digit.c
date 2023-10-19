#include "main.h"
/**
 * print_last_digit - prints
 * @n: integer
 *
 * Return: int
 */
int print_last_digit(int n)
{
	_putchar(n % 10 + 48);

	return (n % 10);
}
