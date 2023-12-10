#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds
 * @head: head
 * @n: n
 *
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	end = *head;

	while (end->next)
		end = end->next;

	new->prev = end;
	end->next = new;

	return (new);
}
