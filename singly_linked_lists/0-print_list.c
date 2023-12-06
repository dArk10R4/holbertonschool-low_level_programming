#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints linked list
 * @h: list_t * head of list
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	char *str;
	int len;

	while (h)
	{
		if (!h->str)
		{
			str = "(nil)";
			len = 0;
		}
		else
		{
			str = h->str;
			len = h->len;
		}

		printf("[%d] %s\n", len, str);
		size++;
		h = h->next;
	}

	return (size);
}
