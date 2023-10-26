/**
 * _atoi - prints num
 * @s: char *
 *
 * Return int
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sing = 1;
	int len = 0;

	while (*(s + len))
	{
		if (*(s + len) == '-')
			sing *= -1;

		if (*(s + len) >= '0' && *(s + len) <= '9')
			num = num * 10 + *(s + len) - 48;
	}

	return (num * sign);
}
