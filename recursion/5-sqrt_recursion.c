/**
 * call_back
 * @n: int
 * @i: int
 *
 * Return: int
 */
int call_back(int n, int i)
{
	if (i > n / 2)
		return (-1);
	if (i * i == n)
		return (i);

	return (call_back(n, i + 1));
}


/**
 * _sqrt_recursion - sqrt
 * @n: int
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n < 2)
		return (n);

	return (call_back(n, 1));
}
