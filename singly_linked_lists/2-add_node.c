#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list
 * @head: list_t **
 * @str: const char *
 *
 * Return: list_t *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	if (str)
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
