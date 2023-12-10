#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
