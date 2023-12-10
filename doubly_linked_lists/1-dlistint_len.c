#include <stdio.h>
#include "lists.h"


/**
 * dlistint_len - finds len
 * @h: head
 *
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h && ++len)
		h = h->next;

	return (len);
}
