#include "main.h"
/**
 * print_last_digit - prints
 * @n: integer
 *
 * Return: int
 */
int print_last_digit(int n)
{
	n < 0 ? _putchar(-(n % 10) + 48) : _putchar(n % 10 + 48);

	return (n < 0 ? -n % 10 : n % 10);
}
