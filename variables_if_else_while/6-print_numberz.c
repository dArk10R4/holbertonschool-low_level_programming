#include <stdio.h>

/**
 * main - prints all alpabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
