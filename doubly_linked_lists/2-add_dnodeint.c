#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add
 * @head: head
 * @n: int
 *
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;

	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
