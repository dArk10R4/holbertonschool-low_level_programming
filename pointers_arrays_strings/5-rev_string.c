/**
  * rev_string - reverse the string
  * @s: char*
  */
void rev_string(char *s)
{
	int len = 0;
	int x;

	while (*(s + len))
		len++;

	for (x = 0; x < len / 2; x++)
	{
		char temp = *(s + x);
		*(s + x) = *(s + len - x - 1);
		*(s + len - 1 - x) = temp;
	}
}
