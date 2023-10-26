/**
 * _atoi - prints
 * @s: char *
 *
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	short int sign = 1;
	int len = 0;

	while (*(s + len))
	{
		if (*(s + len) == '-')
			sign *= -1;

		if (*(s + len) >= '0' && *(s + len) <= '9')
			num = num * 10 + *(s + len) - 48;
		len++;
	}

	return (num * sign);
}
