#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - a function that adds a new node at the beginningof a list
 * @head: a pointer
 * @n: intergers
 * Return: the address of the new element, null if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);

}
