#include <stdio.h>
/**
 * _isalpha - chechs is alpha
 * @c: char number
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}
