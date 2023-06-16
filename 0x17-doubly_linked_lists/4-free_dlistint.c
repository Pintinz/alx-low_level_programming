#include "lists.h"

/**
 * free_dlistint - a function that Frees a linked dlistint_t list.
 * @head: the dlistint_t list head.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
