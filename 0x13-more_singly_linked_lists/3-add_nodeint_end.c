#include "lists.h"

/**
 * add_nodeint_end - a Function that add node at the end
 * @head: pointer to struct
 * @n: number
 *
 * Return: list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *last = *head;

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (!(*head))
	{
		*head = new_node;
	}
	else
	{
		while (last->next)
			last = last->next;
		last->next = new_node;
	}
	return (*head);
}
