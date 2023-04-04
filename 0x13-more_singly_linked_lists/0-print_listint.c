#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a listint_t
 * @h: list of elements
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	while (h != NULL)
	{
		size_t m = 0;

		printf("%d\n", h->n);
		h = h->next, m++;
	}
	return (m);
}
