#include "lists.h"

/**
 * free_listint2 - a Funtions that free a list head = NULL
 *
 * @head: pointer
 *
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *pump;

	if (!head)
	{
		return;
	}

	while (*head)
	{
		pump = *head;
		*head = (*head)->next;
		free(pump);
	}
	*head = NULL;
}
