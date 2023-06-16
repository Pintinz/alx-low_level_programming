#include "lists.h"

/**
 * dlistint_len -A function that Counts the number of elements in a linked dlistint_t list.
 * @h: the dlistint_t list head.
 *
 * Return: it returns The number of elements in the dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
