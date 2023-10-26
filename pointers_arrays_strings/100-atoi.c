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
	short int start = 0;

	while (*(s + len))
	{
		if (start && (*(s + len) < '0' || *(s + len) > '9'))
			break;

		if (*(s + len) == '-')
			sign *= -1;

		if (*(s + len) >= '0' && *(s + len) <= '9')
		{
			start = 1;
			num = num * 10 + *(s + len) - 48;
		}
		len++;
	}

	return (num * sign);
}
