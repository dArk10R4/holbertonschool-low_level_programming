/**
 * call_back - call_back
 * @n: int
 * @i: int
 *
 * Return: int
 */
int call_back(int n, int i)
{
	if (n < 2)
		return (0);

	if (i >= n / 2)
		return (1);

	if (n % i == 0)
		return (0);

	return (call_back(n, i + 1));
}

/**
 * is_prime_number - checks prime
 * @n: int
 *
 * Return: int
 */
int is_prime_number(int n)
{
	return (call_back(n, 2));
}
