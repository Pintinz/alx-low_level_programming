#include "lists.h"

/**
 * delete_nodeint_at_index - a Function that delete a node
 * @head: node head
 * @index: index
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *actual_node = *head;
	listint_t *new_node;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		new_node = *head;
		*head = (*head)->next;
		free(actual_node);
		return (1);
	}
	while (actual_node)
	{
		if (n  == index - 1)
		{
			new_node = actual_node->next;
			actual_node->next = new_node->next;
			free(new_node);
			return (1);
		}
		actual_node = actual_node->next, n++;
	}
	return (-1);
}
