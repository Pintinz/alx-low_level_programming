#include "lists.h"

/**
 * pop_listint - a Function that deletes the head node
 * @head: head node
 *
 * Return: head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node = *head;
	int digit;

	if (!*head)
	{
		return (0);
	}

	digit = (*head)->n;
	*head = new_node->next;
	free(new_node);
	return (digit);
}
