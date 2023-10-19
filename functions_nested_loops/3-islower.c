#include <stdio.h>
/**
 * _islower - chechks is lower or not
 * @c: the char number
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	return ('a' <= c && c <= 'z');
}
