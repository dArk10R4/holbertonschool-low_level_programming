#include <stdio.h>

/**
 * main - prints all alpabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = i; j <= '9'; j++)
		{


			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
			{
				continue;
			}

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
