#include <stdio.h>

/**
 * main - main
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(i / 10 + 48);
			putchar(i % 10 + 48);
			putchar(' ');
			putchar(j / 10 + 48);
			putchar(j % 10 + 48);

			if (j == 99 && i == 98)
				break;

			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
