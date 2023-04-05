#include "lists.h"

/**
 * insert_nodeint_at_index -a Function  that insert node
 * @head: head node
 * @idx: index
 * @n: integer
 *
 * Return: listint
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *actual_node = *head;
	unsigned int p = 0;

	if (!new_node)
		return (free(new_node), NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL && idx > 0)
	{
		free(new_node);
		return (NULL);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (; p < idx - 1; p++)
	{
		actual_node = actual_node->next;
		if (actual_node == NULL && idx - p > 0)
		{
			free(new_node);
			return (NULL);
		}
	}

	new_node->next = actual_node->next;
	actual_node->next = new_node;

	return (new_node);
}
