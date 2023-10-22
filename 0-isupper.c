/**
 * _isupper - func
 * @c: char
 *
 * Return: bool
 */
int _isupper(int c)
{
	if ((int)'A' <= c && (int)'Z' >= c)
		return 1;
	return 0;
}
