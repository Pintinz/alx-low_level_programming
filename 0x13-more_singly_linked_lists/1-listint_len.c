#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a funcgtion that returns the number of elements
 * @h: list
 * Return: the number of element n
 */

size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		h = h->next, m++;
	}
	return (m);
}
