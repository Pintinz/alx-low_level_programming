#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - a function that prints a linked list
 * @head: list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t m = 0;
	const listint_t *temp_node, *actual_node;

	actual_node = head;
	while (actual_node != NULL)
	{
		printf("[%p] %d\n", (void *)actual_node, actual_node->n);
		temp_node = actual_node;
		actual_node = actual_node->next;
		m++;
		if (temp_node <= actual_node)
		{
			printf("-> [%p] %d\n", (void *)temp_node, actual_node->n);
			break;
		}
	}
	return (m);
}
