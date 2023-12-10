#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts at index
 * @h: head
 * @idx: index
 * @n: n
 *
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));


	curr = *h;

	for (i = 0; i < idx - 1; i++)
	{
		if (curr == NULL)
			return (NULL);

		curr = curr->next;
	}

	if (!curr->next)
		return (add_dnodeint_end(&curr, n));

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = curr->next;
	new->prev = curr;
	curr->next->prev = new;
	curr->next = new;

	return (new);
}
