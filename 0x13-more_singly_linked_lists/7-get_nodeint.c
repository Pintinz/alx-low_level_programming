#include "lists.h"

/**
 * get_nodeint_at_index - a Function that returns nth of the list
 * @head: head nodes
 * @index: index of the node
 * Return: list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node = head;
	unsigned int n;

	if (!head)
	{
		return (0);
	}

	for (n = 0; new_node; n++)
	{
		if (n == index)
		{
			return (new_node);
		}
		new_node = new_node->next;
	}
	return (NULL);
}
