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

  while(h)
    {
      if (!h->str)
	{
	  printf("[0] (nil)\n");
	  h = h->next;
	  continue;
	}

      printf("[%d] %s\n", h->len, h->str);
      size++;
      h = h->next;
    }

  return (size);
}
